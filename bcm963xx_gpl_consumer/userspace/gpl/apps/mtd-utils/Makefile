
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

APP = mtd-utils
VERS = 2.0.2
FILE = $(APP)-$(VERS).tar.bz2
LOC = ftp://ftp.infradead.org/pub/mtd-utils

SERVER_PROGS = \
	$(BCM_FSBUILD_DIR)/$(APP)/sbin/flash_otp_info \
	$(BCM_FSBUILD_DIR)/$(APP)/sbin/flash_otp_dump \
	$(BCM_FSBUILD_DIR)/$(APP)/sbin/mtd_debug \
	$(BCM_FSBUILD_DIR)/$(APP)/sbin/flashcp \
	$(BCM_FSBUILD_DIR)/$(APP)/sbin/nandwrite \
	$(BCM_FSBUILD_DIR)/$(APP)/sbin/nandtest \
	$(BCM_FSBUILD_DIR)/$(APP)/sbin/ubicrc32 \
	$(BCM_FSBUILD_DIR)/$(APP)/sbin/ubinfo \
	$(BCM_FSBUILD_DIR)/$(APP)/sbin/ubiformat \
	$(BCM_FSBUILD_DIR)/$(APP)/sbin/mtdinfo

CONFIGURE_VARS := \
	PKG_CONFIG_LIBDIR=$(BCM_FSBUILD_DIR)/public/lib \
	PKG_CONFIG_PATH=$(BCM_FSBUILD_DIR)/public/lib/pkgconfig \
	CPPFLAGS='-I$(TOOLCHAIN_INCLUDE_DIR) -I$(BCM_FSBUILD_DIR)/public/include' \
	LDFLAGS='-L$(TOOLCHAIN)/$(TOOLCHAIN_LIBDIR) -L$(INSTALL_DIR)/lib/public -Wl,-rpath-link,$(INSTALL_DIR)/lib/public'

CONFIGURE_ARGS := \
	--host=$(TOOLCHAIN_PREFIX) \
	--prefix=/ \
	--disable-tests \
	--without-lzo --without-xattr --without-ubifs --without-jffs

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
	@touch $(PATCH_ID_FILE)
	@echo "$(APP) is patched"

$(CONFIG_ID_FILE) : $(PATCH_ID_FILE)
	$(MAKE) clean
	@cd $(APP); $(CONFIGURE_VARS) ./configure $(CONFIGURE_ARGS) 1>$(CONFIG_ID_FILE) 2>&1
	@echo "$(APP) is configured"

$(COMPILE_ID_FILE) : $(CONFIG_ID_FILE)
	$(MAKE) -C $(APP) 1>$(COMPILE_ID_FILE) 2>&1

install: sanity_check $(COMPILE_ID_FILE)
	$(MAKE) -C $(APP) DESTDIR=$(BCM_FSBUILD_DIR)/$(APP) install
	cp -d $(SERVER_PROGS) $(INSTALL_DIR)/sbin

clean:
	-$(MAKE) -C $(APP) distclean
	-@rm $(APP)-CONFIG_ID_* $(APP)-COMPILE_ID_*

distclean:
	rm -rf $(APP) $(APP)-*_ID_*

shell:
	$(CONFIGURE_VARS) bash -i
