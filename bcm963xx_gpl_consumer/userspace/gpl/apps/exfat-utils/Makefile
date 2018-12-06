
conditional_build: all

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

LOC = https://github.com/relan/exfat/releases/download/v1.3.0
APP = exfat-utils
VERS = 1.3.0
FILE = $(APP)-$(VERS).tar.gz

export LINUX_VER_STR TOOLCHAIN_PREFIX
CONFIG_ID_FILE = $(APP)/CONFIG_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
PATCH_ID_FILE = $(APP)/PATCH_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
SOURCE_ID_FILE = $(APP)/SOURCE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)

CONFIGURE_VARS := \
	PKG_CONFIG_LIBDIR=$(BCM_FSBUILD_DIR)/public/lib \
	PKG_CONFIG_PATH=$(BCM_FSBUILD_DIR)/public/lib/pkgconfig \
	CPPFLAGS='-I$(BCM_FSBUILD_DIR)/public/include' \
	LDFLAGS='-L$(INSTALL_DIR)/lib/public -Wl,-rpath-link,$(INSTALL_DIR)/lib/public'

CONFIGURE_ARGS := \
	--host=$(TOOLCHAIN_PREFIX) \
	--prefix=/

clean:
	[ -e $(CONFIG_ID_FILE) ] && ($(MAKE) -C $(APP) distclean; rm $(CONFIG_ID_FILE)) || true

# The next line is a hint to our release scripts
# GLOBAL_RELEASE_SCRIPT_CALL_DISTCLEAN
distclean:
	rm -rf $(APP)

.PHONY: conditional_build

check_untar:
	@if [ ! -e $(SOURCE_ID_FILE) ]; then \
		([ ! -e $(FILE) ] && wget -O $(FILE) $(LOC)/$(FILE) || true); \
		mkdir -p $(APP); \
		(tar -C $(APP) --strip-components=1 -xkf $(FILE) 2> /dev/null || true); \
	fi
	@echo "$(APP) is untarred"
	@touch $(SOURCE_ID_FILE)

check_patch: check_untar
#	[ ! -e $(PATCH_ID_FILE) ] && quilt push -a || true
	@echo "$(APP) is patched"
	@touch $(PATCH_ID_FILE)

check_config: check_patch
	[ ! -e $(CONFIG_ID_FILE) ] && ( \
		cd $(APP); \
		$(MAKE) distclean; \
		$(CONFIGURE_VARS) ./configure $(CONFIGURE_ARGS);) || true
	@echo "$(APP) is configured"
	@touch $(CONFIG_ID_FILE)

all: check_config
	$(MAKE) -C $(APP)
#	@install -m 755 $(APP)/fuse/mount.exfat-fuse $(INSTALL_DIR)/sbin/
#	@ln -sfr $(INSTALL_DIR)/sbin/mount.exfat-fuse $(INSTALL_DIR)/sbin/mount.exfat

shell:
	bash -i
