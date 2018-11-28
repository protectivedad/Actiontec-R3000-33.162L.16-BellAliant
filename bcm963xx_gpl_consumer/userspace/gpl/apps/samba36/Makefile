
CONFIGURE_VARS := \
	samba_cv_SYSQUOTA_WORKS_NFS=no \
	samba_cv_HAVE_IFACE_IFCONF=yes \
	samba_cv_have_longlong=yes \
	linux_getgrouplist_ok=no \
	ac_cv_linux_vers=$(LINUX_VER_STR) \
	ac_cv_lib_attr_getxattr=no \
	ac_cv_search_getxattr=no \
	ac_cv_file__proc_sys_kernel_core_pattern=yes \
	libreplace_cv_HAVE_C99_VSNPRINTF=yes \
	libreplace_cv_HAVE_GETADDRINFO=no \
	libreplace_cv_HAVE_IFACE_IFCONF=yes \
	LINUX_LFS_SUPPORT=yes \
	samba_cv_CC_NEGATIVE_ENUM_VALUES=yes \
	samba_cv_HAVE_GETTIMEOFDAY_TZ=yes \
	samba_cv_HAVE_KERNEL_OPLOCKS_LINUX=yes \
	samba_cv_HAVE_SECURE_MKSTEMP=yes \
	samba_cv_HAVE_WRFILE_KEYTAB=no \
	samba_cv_USE_SETREUID=yes \
	samba_cv_USE_SETRESUID=yes \
	samba_cv_have_setreuid=yes \
	samba_cv_have_setresuid=yes \
	ac_cv_header_libunwind_h=no \
	ac_cv_header_zlib_h=no \
	samba_cv_zlib_1_2_3=no \
	ac_cv_path_PYTHON="" \
	ac_cv_path_PYTHON_CONFIG=""

CONFIGURE_ARGS := \
	--target=$(TOOLCHAIN_PREFIX) --host=$(TOOLCHAIN_PREFIX) \
	--with-privatedir=/var/samba --with-lockdir=/var/samba/locks --with-configdir=/var/samba --with-piddir=/var/samba --with-logfilebase=/var/samba \
	--disable-developer \
	--disable-cups \
	--disable-fam \
	--disable-iprint \
	--disable-pie \
	--without-ldap \
	--without-cluster-support \
	--without-acl-support \
	--exec-prefix=/bin \
	--prefix=/ \
	--disable-avahi \
	--disable-relro \
	--disable-static \
	--disable-swat \
	--disable-shared-libs \
	--with-included-iniparser \
	--with-included-popt \
	--with-nmbdsocketdir=/var/samba/nmbd \
	--with-sendfile-support \
	--without-ads \
	--without-krb5 \
	--without-pam \
	--without-winbind \
	--without-libtalloc --without-libtdb --without-libtevent \
	CPPFLAGS='-Wno-error=uninitialized'

samba: all

check_untar:
	@if [ ! -e samba/INSTALL ]; then \
	    [ ! -e samba.tar.gz ] && wget -q -O samba.tar.gz https://download.samba.org/pub/samba/stable/samba-3.6.25.tar.gz || true; \
	    mkdir -p samba; \
	    (tar -C samba --strip-components=1 -xkzf samba.tar.gz 2> /dev/null || true); \
	fi
	@echo "SAMBA is untarred"

check_patch: check_untar
	@if [ ! -e samba/PATCHES_APPLIED ]; then \
	    for patch in patches/*.patch; do \
	        echo $$patch; patch -b -d samba -p1 -i ../$$patch; \
	    done; \
	    touch samba/PATCHES_APPLIED; \
	fi
	@echo "SAMBA is patched"

check_config: check_patch
	@if [ ! -e samba/source3/Makefile ]; then \
	     cd samba/source3; ./autogen.sh; $(CONFIGURE_VARS) ./configure $(CONFIGURE_ARGS); \
	fi
	@echo "SAMBA is configured"

all: check_config
	$(MAKE) -C samba/source3 bin/samba_multicall
	install -m 755 samba/source3/bin/samba_multicall $(INSTALL_DIR)/bin
	ln -f -s -r $(INSTALL_DIR)/bin/samba_multicall $(INSTALL_DIR)/bin/smbd
	ln -f -s -r $(INSTALL_DIR)/bin/samba_multicall $(INSTALL_DIR)/bin/nmbd
	ln -f -s -r $(INSTALL_DIR)/bin/samba_multicall $(INSTALL_DIR)/bin/smbpasswd
