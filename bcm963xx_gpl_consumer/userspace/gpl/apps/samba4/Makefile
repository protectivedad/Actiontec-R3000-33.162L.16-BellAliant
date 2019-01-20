
all dynamic : install

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

APP = samba
VERS = 4.9.4
FILE = $(APP)-$(VERS).tar.gz
LOC = https://download.samba.org/pub/samba/stable

SERVER_PROGS = \
	$(BCM_FSBUILD_DIR)/$(APP)/sbin/nmbd \
	$(BCM_FSBUILD_DIR)/$(APP)/sbin/smbd \
	$(BCM_FSBUILD_DIR)/$(APP)/bin/smbpasswd \
	$(BCM_FSBUILD_DIR)/$(APP)/bin/pdbedit \
	$(BCM_FSBUILD_DIR)/$(APP)/bin/testparm 

CONFIGURE_VARS := \
	PKG_CONFIG_LIBDIR=$(BCM_FSBUILD_DIR)/public/lib \
	PKG_CONFIG_PATH=$(BCM_FSBUILD_DIR)/public/lib/pkgconfig \
	CPPFLAGS='-I$(TOOLCHAIN_INCLUDE_DIR) -I$(BCM_FSBUILD_DIR)/public/include' \
	LDFLAGS='-L$(TOOLCHAIN)/$(TOOLCHAIN_LIBDIR) -L$(INSTALL_DIR)/lib/public -Wl,-rpath-link,$(INSTALL_DIR)/lib/public' \
	python_LDFLAGS="" \
	python_LIBDIR=""

CONFIGURE_ARGS := \
	--host=$(TOOLCHAIN_PREFIX) \
	--prefix=/ --libdir=/lib/gpl --with-privatelibdir=/lib/private \
	 --with-configdir=/var/samba \
 --with-statedir=/var/samba/locks --with-lockdir=/var/samba/locks --with-logfilebase=/var/samba --with-piddir=/var/samba --with-privatedir=/var/samba --with-bind-dns-dir=/var/samba/ \
 --destdir=$(BCM_FSBUILD_DIR) \
	--target=$(TOOLCHAIN_PREFIX) \
	--cross-compile \
	--cross-execute=$(CURR_DIR)/cross-execute.sh \
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
	--with-system-mitkdc=/sbin/krb5kdc

#	--bundled-libraries=talloc,tevent,texpect,tdb,ldb,tdr,cmocka,replace,NONE \
#	--cross-answers=cross-answers.txt \
#	--builtin-libraries=talloc,tevent,texpect,tdb,ldb,tdr,cmocka,zlib \
#	--bundled-libraries=talloc,tevent,texpect,tdb,ldb,tdr,cmocka,zlib,NONE \
#	--private-libraries=talloc,tevent,texpect,tdb,ldb,tdr,cmocka,zlib \

export LINUX_VER_STR TOOLCHAIN_PREFIX
CONFIG_ID_FILE = $(CURR_DIR)/$(APP)-CONFIG_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
PATCH_ID_FILE = $(CURR_DIR)/$(APP)-PATCH_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
SOURCE_ID_FILE = $(CURR_DIR)/$(APP)-SOURCE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
COMPILE_ID_FILE = $(CURR_DIR)/$(APP)-COMPILE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)

.PHONY: install clean distclean

ifneq ($(strip $(BUILD_SAMBA)),)

$(FILE):
	wget -O $(FILE) $(LOC)/$(FILE)

$(SOURCE_ID_FILE) : $(FILE)
	@mkdir -p $(APP)
	(tar -C $(APP) --strip-components=1 -xkf $(FILE) 1>$(SOURCE_ID_FILE) 2>&1 || true)
	@echo "$(APP) is untarred"

$(PATCH_ID_FILE) : $(SOURCE_ID_FILE)
	(quilt push -a 1>$(PATCH_ID_FILE) 2>&1 || true)
	@echo "$(APP) is patched"

$(CONFIG_ID_FILE) : $(PATCH_ID_FILE)
	$(MAKE) clean
	@cd $(APP); $(CONFIGURE_VARS) ./configure $(CONFIGURE_ARGS) 1>$(CONFIG_ID_FILE) 2>&1
	@echo "$(APP) is configured"

$(COMPILE_ID_FILE) : $(CONFIG_ID_FILE)
	$(MAKE) -C $(APP) 1>$(COMPILE_ID_FILE) 2>&1

install: $(COMPILE_ID_FILE)
	$(MAKE) -C $(APP) DESTDIR=$(BCM_FSBUILD_DIR)/$(APP) install
	@mkdir -p $(INSTALL_DIR)/lib/gpl $(INSTALL_DIR)/lib/private $(INSTALL_DIR)/bin
	@cp -fd $(BCM_FSBUILD_DIR)/$(APP)/lib/gpl/*.so* $(INSTALL_DIR)/lib/gpl/
	@cp -fd $(BCM_FSBUILD_DIR)/$(APP)/lib/private/*.so* $(INSTALL_DIR)/lib/private/
	@cp -fd $(SERVER_PROGS) $(INSTALL_DIR)/bin

else
install: sanity_check
	@echo "skipping $(APP) (not configured)"
endif

clean:
	-$(MAKE) -C $(APP) distclean
	-@rm $(APP)-CONFIG_ID_* $(APP)-COMPILE_ID_*

distclean:
	rm -rf $(APP) $(APP)-*_ID_*

shell:
	$(CONFIGURE_VARS) bash -i
