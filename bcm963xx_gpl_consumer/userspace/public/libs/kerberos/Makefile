
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

LOC = https://web.mit.edu/kerberos/dist/krb5/1.16
APP = krb5
VERS = 1.16.2
FILE = $(APP)-$(VERS).tar.gz

CONFIGURE_VARS := \
	PKG_CONFIG_LIBDIR=$(BCM_FSBUILD_DIR)/public/lib \
	PKG_CONFIG_PATH=$(BCM_FSBUILD_DIR)/public/lib/pkgconfig \
	CPPFLAGS='-I$(BCM_FSBUILD_DIR)/public/include' \
	LDFLAGS='-L$(INSTALL_DIR)/lib/public -Wl,-rpath-link,$(INSTALL_DIR)/lib/public' \
	ac_cv_linux_vers=$(LINUX_VER_STR) \
	cross_compiling=yes \
	krb5_cv_attr_constructor_destructor=yes,yes \
	ac_cv_func_regcomp=yes \
	ac_cv_printf_positional=yes \
	ac_cv_file__etc_environment=no \
	ac_cv_file__etc_TIMEZONE=no \
	ac_cv_header_keyutils_h=no

CONFIGURE_ARGS := \
	--host=$(TOOLCHAIN_PREFIX) \
	--prefix=$(BCM_FSBUILD_DIR)/public \
	--disable-pkinit \
	--disable-rpath \
	--without-tcl \
	--without-tls-impl \
	--without-libedit \
	--without-readline \
	--without-system-verto \
	--with-crypto-impl=openssl \
	--disable-nls

export LINUX_VER_STR TOOLCHAIN_PREFIX
CONFIG_ID_FILE = $(APP)/CONFIG_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
PATCH_ID_FILE = $(APP)/PATCH_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
SOURCE_ID_FILE = $(APP)/SOURCE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)

.PHONY: conditional_build

check_untar:
	@if [ ! -e $(SOURCE_ID_FILE) ]; then \
		[ ! -e $(FILE) ] && wget -O $(FILE) $(LOC)/$(FILE) || true; \
		mkdir -p $(APP); \
		(tar -C $(APP) --strip-components=1 -xkf $(FILE) 2> /dev/null || true); \
	fi
	@echo "$(APP) is untarred"
	@touch $(SOURCE_ID_FILE)

check_patch: check_untar
	[ ! -e krb5/$(PATCH_ID_FILE) ] && quilt push -a || true
	@echo "$(APP) is patched"
	@touch $(PATCH_ID_FILE)

check_config: check_patch
	[ ! -e $(CONFIG_ID_FILE) ] && ( \
		cd $(APP)/src; \
		$(MAKE) distclean; \
		$(CONFIGURE_VARS) ./configure $(CONFIGURE_ARGS);) || true
	@echo "$(APP) is configured"
	@touch $(CONFIG_ID_FILE)

conditional_build: check_config
	mkdir -p $(INSTALL_DIR)/lib/public/
	$(MAKE) -j 1 -C $(APP)/src
	$(MAKE) -j 1 -C $(APP)/src install
	cp -d $(BCM_FSBUILD_DIR)/public/lib/libcom_err.so* $(INSTALL_DIR)/lib/public/
	cp -d $(BCM_FSBUILD_DIR)/public/lib/libk5crypto.so* $(INSTALL_DIR)/lib/public/
	cp -d $(BCM_FSBUILD_DIR)/public/lib/libkrb5.so* $(INSTALL_DIR)/lib/public/
	cp -d $(BCM_FSBUILD_DIR)/public/lib/libgssapi_krb5.so* $(INSTALL_DIR)/lib/public/
	cp -d $(BCM_FSBUILD_DIR)/public/lib/libkrb5support.so* $(INSTALL_DIR)/lib/public/

shell:
	bash -i
