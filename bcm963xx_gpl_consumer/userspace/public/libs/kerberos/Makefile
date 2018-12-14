
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

APP = krb5
VERS = 1.16.2
FILE = $(APP)-$(VERS).tar.gz
LOC = https://web.mit.edu/kerberos/dist/krb5/1.16

SERVER_LIBS = \
	$(BCM_FSBUILD_DIR)/public/lib/libcom_err.so* \
	$(BCM_FSBUILD_DIR)/public/lib/libk5crypto.so* \
	$(BCM_FSBUILD_DIR)/public/lib/libkrb5.so* \
	$(BCM_FSBUILD_DIR)/public/lib/libgssapi_krb5.so* \
	$(BCM_FSBUILD_DIR)/public/lib/libkrb5support.so*

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
	--with-size-optimizations \
	--disable-nls

export LINUX_VER_STR TOOLCHAIN_PREFIX
CONFIG_ID_FILE = $(CURR_DIR)/$(APP)-CONFIG_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
PATCH_ID_FILE = $(CURR_DIR)/$(APP)-PATCH_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
SOURCE_ID_FILE = $(CURR_DIR)/$(APP)-SOURCE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
COMPILE_ID_FILE = $(CURR_DIR)/$(APP)-COMPILE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)

.PHONY: install clean distclean

$(FILE):
	wget -O $(FILE) $(LOC)/$(FILE)

$(SOURCE_ID_FILE) : $(FILE)
	@mkdir -p $(APP)
	(tar -C $(APP) --strip-components=1 -xkf $(FILE) 1>$(SOURCE_ID_FILE) 2>&1 || true)
	@echo "$(APP) is untarred"

$(PATCH_ID_FILE) : $(SOURCE_ID_FILE)
	quilt push -a || true
	@touch $(PATCH_ID_FILE)
	@echo "$(APP) is patched"

$(CONFIG_ID_FILE) : $(PATCH_ID_FILE)
	$(MAKE) clean
	@cd $(APP)/src; $(CONFIGURE_VARS) ./configure $(CONFIGURE_ARGS) 1>$(CONFIG_ID_FILE) 2>&1
	@echo "$(APP) is configured"

$(COMPILE_ID_FILE) : $(CONFIG_ID_FILE)
	$(MAKE) -C $(APP)/src 1>$(COMPILE_ID_FILE) 2>&1

install: sanity_check $(COMPILE_ID_FILE)
	@mkdir -p $(INSTALL_DIR)/lib/public/
	$(MAKE) -C $(APP)/src install
	@cp -d $(SERVER_LIBS) $(INSTALL_DIR)/lib/public/

clean:
	-$(MAKE) -C $(APP)/src distclean
	-@rm $(APP)-CONFIG_ID_* $(APP)-COMPILE_ID_*

distclean:
	rm -rf .pc $(APP) $(APP)-*_ID_*

shell:
	bash -i
