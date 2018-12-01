
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

LOC = https://github.com/libfuse/libfuse/releases/download/fuse-2.9.8
APP = fuse
VERS = 2.9.8
FILE = $(APP)-$(VERS).tar.gz

CONFIGURE_VARS := \
	PKG_CONFIG_LIBDIR=$(BCM_FSBUILD_DIR)/public/lib \
	PKG_CONFIG_PATH=$(BCM_FSBUILD_DIR)/public/lib/pkgconfig

CONFIGURE_ARGS := \
	--host=$(TOOLCHAIN_PREFIX) \
	--prefix=$(BCM_FSBUILD_DIR)/public \
	--disable-rpath \
	--disable-mtab \
	--enable-lib \
	--disable-util

export LINUX_VER_STR TOOLCHAIN_PREFIX
CONFIG_ID_FILE = $(APP)/CONFIG_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
PATCH_ID_FILE = $(APP)/PATCH_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
SOURCE_ID_FILE = $(APP)/SOURCE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)

.PHONY: conditional_build

conditional_build: all

clean:
	[ -e $(CONFIG_ID_FILE) ] && ($(MAKE) -C $(APP) distclean; rm $(CONFIG_ID_FILE)) || true

distclean:
	rm -rf $(APP)

check_untar:
	@if [ ! -e $(SOURCE_ID_FILE) ]; then \
		[ ! -e $(FILE) ] && wget -O $(FILE) $(LOC)/$(FILE) || true; \
		mkdir -p $(APP); \
		(tar -C $(APP) --strip-components=1 -xkf $(FILE) 2> /dev/null || true); \
	fi
	@echo "$(APP) is untarred"
	@touch $(SOURCE_ID_FILE)

check_patch: check_untar
	@echo "$(APP) is patched"
	@touch $(PATCH_ID_FILE)

check_config: check_patch
	[ ! -e $(CONFIG_ID_FILE) ] && ( \
		cd $(APP); \
		$(MAKE) distclean; \
		$(CONFIGURE_VARS) ./configure $(CONFIGURE_ARGS);) || true
	@echo "$(APP) is configured"
	@touch $(CONFIG_ID_FILE)

conditional_build: check_config
	$(MAKE) -C $(APP)
	$(MAKE) -C $(APP) install
	@cp -af $(BCM_FSBUILD_DIR)/public/lib/libfuse.so* $(BCM_FSBUILD_DIR)/public/lib/libulockmgr.so* $(INSTALL_DIR)/lib/public

shell:
	bash -i
