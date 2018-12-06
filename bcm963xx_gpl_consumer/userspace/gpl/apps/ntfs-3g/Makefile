
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

LOC = https://tuxera.com/opensource/
APP = ntfs-3g_ntfsprogs-2017.3.23
FILE = $(APP).tgz

export LINUX_VER_STR TOOLCHAIN_PREFIX
CONFIG_ID_FILE = $(APP)/CONFIG_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
PATCH_ID_FILE = $(APP)/PATCH_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
SOURCE_ID_FILE = $(APP)/SOURCE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)

CONFIGURE_VARS := \
	PKG_CONFIG_LIBDIR=$(BCM_FSBUILD_DIR)/public/lib \
	PKG_CONFIG_PATH=$(BCM_FSBUILD_DIR)/public/lib/pkgconfig

CONFIGURE_ARGS := \
	--host=$(TOOLCHAIN_PREFIX) \
	--target=$(TOOLCHAIN_PREFIX) \
	--prefix=/ \
	--enable-shared \
	--enable-static \
	--with-fuse=external

clean:
	[ -e $(CONFIG_ID_FILE) ] && ($(MAKE) -C $(APP) distclean; rm $(CONFIG_ID_FILE)) || true

# The next line is a hint to our release scripts
# GLOBAL_RELEASE_SCRIPT_CALL_DISTCLEAN
distclean:
	rm -rf $(APP)

#.PHONY: check_untar_patch_configure conditional_build

check_untar:
	@if [ ! -e $(SOURCE_ID_FILE) ]; then \
		[ ! -e $(FILE) ] && wget $(LOC)/$(FILE) || true; \
		(tar xkzf $(FILE) 2> /dev/null || true); \
	fi
	@echo "NTFS-3G is untarred"
	@touch $(SOURCE_ID_FILE)

check_patch: check_untar
	[ ! -e $(PATCH_ID_FILE) ] && patch -p1 -b -s -d$(APP) < $(APP).patch || true
	@echo "NTFS-3G is patched"
	@touch $(PATCH_ID_FILE)

check_config: check_patch
	[ ! -e $(CONFIG_ID_FILE) ] && ( \
		cd $(APP); \
		$(MAKE) distclean; \
		$(CONFIGURE_VARS) ./configure $(CONFIGURE_ARGS);) || true
	@echo "NTFS-3G is configured"
	@touch $(CONFIG_ID_FILE)

all: sanity_check check_config
	$(MAKE) -C $(APP)
	@cp $(APP)/libntfs-3g/.libs/libntfs-3g.so* $(INSTALL_DIR)/lib
	install -m 755 $(APP)/src/.libs/ntfs-3g  $(INSTALL_DIR)/bin/ntfs-3g	

shell:
	bash -i
