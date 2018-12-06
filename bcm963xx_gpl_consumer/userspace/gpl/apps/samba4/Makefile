
all dynamic install: conditional_build

#
# Set our CommEngine directory (by splitting the pwd into two words
# at /userspace and taking the first word only).
# Then include the common defines under CommEngine.
# You do not need to modify this part.
#
CURR_DIR := $(shell pwd)
BUILD_DIR:=$(subst /userspace, /userspace,$(CURR_DIR))
BUILD_DIR:=$(word 1, $(BUILD_DIR))

include $(BUILD_DIR)/make.common

CONFIG_ID_FILE = samba/CONFIG_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
PATCH_ID_FILE = samba/PATCH_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)

SERVER_PROGS = \
	$(BCM_FSBUILD_DIR)/samba/sbin/nmbd \
	$(BCM_FSBUILD_DIR)/samba/sbin/smbd \
	$(BCM_FSBUILD_DIR)/samba/bin/smbpasswd \
	$(BCM_FSBUILD_DIR)/samba/bin/pdbedit \
	$(BCM_FSBUILD_DIR)/samba/bin/testparm 

CONFIGURE_VARS := \
	PKG_CONFIG_LIBDIR=$(BCM_FSBUILD_DIR)/public/lib \
	PKG_CONFIG_PATH=$(BCM_FSBUILD_DIR)/public/lib/pkgconfig \
	CPPFLAGS='-I$(BCM_FSBUILD_DIR)/public/include' \
	LDFLAGS='-L$(INSTALL_DIR)/lib/public -Wl,-rpath-link,$(INSTALL_DIR)/lib/public' \
	python_LDFLAGS="" \
	python_LIBDIR=""

CONFIGURE_ARGS := \
	--enable-developer \
	--enable-debug \
	--prefix=/ --libdir=/lib/gpl --with-privatelibdir=/lib/private \
	 --with-configdir=/var/samba \
 --with-statedir=/var/samba/locks --with-lockdir=/var/samba/locks --with-logfilebase=/var/samba --with-piddir=/var/samba --with-privatedir=/var/samba --with-bind-dns-dir=/var/samba/ \
 --destdir=$(BCM_FSBUILD_DIR) \
	--target=$(TOOLCHAIN_PREFIX) \
	--host=$(TOOLCHAIN_PREFIX) \
	--cross-compile \
	--cross-answers=cross-answers.txt \
	--disable-cups \
	--disable-iprint \
	--disable-cephfs \
	--disable-fault-handling \
	--disable-glusterfs \
	--disable-rpath \
	--disable-rpath-install \
	--disable-rpath-private-install \
	--without-automount \
	--without-iconv \
	--without-lttng \
	--without-ntvfs-fileserver \
	--without-pam \
	--without-systemd \
	--without-utmp \
	--without-dmapi \
	--without-fam \
	--without-gettext \
	--without-regedit \
	--without-gpgme \
	--accel-aes=none \
	--disable-avahi \
	--without-quotas \
	--without-acl-support \
	--without-ad-dc --without-json --without-libarchive --disable-python --nopyc --nopyo --disable-gnutls --without-dnsupdate --without-ads --without-ldap \
	--without-winbind \
	--without-pie \
	--without-cluster-support \
	--without-relro \
	--with-sendfile-support \
	--with-system-mitkrb5 $(BCM_FSBUILD_DIR)/public/ \
	--builtin-libraries=talloc,tevent,texpect,tdb,ldb,tdr,cmocka,replace \
	--bundled-libraries=talloc,tevent,texpect,tdb,ldb,tdr,cmocka,replace,NONE \
	--private-libraries=talloc,tevent,texpect,tdb,ldb,tdr,cmocka,replace \
	--with-system-mitkdc=/sbin/krb5kdc

#	--bundled-libraries=talloc,tevent,texpect,tdb,ldb,tdr,cmocka,replace,NONE \

.PHONY: conditional_build

ifneq ($(strip $(BUILD_SAMBA)),)

check_clone:
	[ ! -e samba/README ] && \
	    git clone -b v4-9-stable --depth=1 git://git.samba.org/samba.git || true
	@echo "SAMBA is cloned"

check_patch: check_clone
	[ ! -e $(PATCH_ID_FILE) ] && ( \
		for patch in patches/*.patch; do \
			echo $$patch; \
			patch -b -d samba -p1 -i ../$$patch; \
		done) || true
	@echo "SAMBA is patched"
	touch $(PATCH_ID_FILE) 

check_config: check_patch shell
	[ ! -e $(CONFIG_ID_FILE) ] && ( \
		cp cross-answers.txt samba/.; \
		cd samba/; \
		$(CONFIGURE_VARS) ./configure $(CONFIGURE_ARGS)) || true
	@echo "SAMBA is configured"
	touch $(CONFIG_ID_FILE)

conditional_build: sanity_check check_config
	$(MAKE) -C samba install DESTDIR=$(BCM_FSBUILD_DIR)/samba
	mkdir -p $(INSTALL_DIR)/lib/gpl $(INSTALL_DIR)/lib/private
	@cp -fd $(BCM_FSBUILD_DIR)/samba/lib/gpl/*.so* $(INSTALL_DIR)/lib/gpl/
	@cp -fd $(BCM_FSBUILD_DIR)/samba/lib/private/*.so* $(INSTALL_DIR)/lib/private/
	@cp -fd $(SERVER_PROGS) $(INSTALL_DIR)/bin

else
conditional_build: sanity_check
	@echo "skipping $(APP) (not configured)"
endif

shell:
	export CONFIGURE_ARGS='$(CONFIGURE_ARGS)'
	$(CONFIGURE_VARS) bash -i
