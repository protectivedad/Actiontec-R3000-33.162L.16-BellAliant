
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

APP = OpenSSL
VERS = 1_0_1u
FILE = $(APP)_$(VERS).tar.gz
LOC = https://github.com/openssl/openssl/archive

CONFIGURE_VARS := \
	PKG_CONFIG_LIBDIR=$(BCM_FSBUILD_DIR)/public/lib \
	PKG_CONFIG_PATH=$(BCM_FSBUILD_DIR)/public/lib/pkgconfig \
	CROSS_COMPILE=

CONFIGURE_ARGS := \
	--prefix=/ \
	no-hw shared no-bf no-cast no-md2 no-mdc2 no-ripemd no-rc2 no-unit-test no-static-engine no-engine no-idea \
	linux-armv4

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

$(CONFIG_ID_FILE) : $(SOURCE_ID_FILE)
	$(MAKE) clean
	@cd $(APP); $(CONFIGURE_VARS) ./Configure $(CONFIGURE_ARGS) 1>$(CONFIG_ID_FILE) 2>&1
	$(MAKE) -C $(APP) depend 1>>$(CONFIG_ID_FILE) 2>&1
	@echo "$(APP) is configured"

$(COMPILE_ID_FILE) : $(CONFIG_ID_FILE)
	$(MAKE) -C $(APP) all 1>$(COMPILE_ID_FILE) 2>&1

install: sanity_check $(COMPILE_ID_FILE)
	mkdir -p $(INSTALL_DIR)/lib/public/
	@cp -f $(APP)/libcrypto.so.1.0.0 $(INSTALL_DIR)/lib/public/
	@cp -f $(APP)/libssl.so.1.0.0 $(INSTALL_DIR)/lib/public/

clean:
	-$(MAKE) -C $(APP) distclean
	-@rm $(APP)-CONFIG_ID_* $(APP)-COMPILE_ID_*

distclean:
	rm -rf $(APP) $(APP)-*_ID_*

shell:
	$(CONFIGURE_VARS) bash -i
