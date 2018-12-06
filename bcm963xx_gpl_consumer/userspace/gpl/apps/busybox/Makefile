ifneq ($(strip $(BUILD_BUSYBOX)),)

conditional_build: all

else

conditional_build:
	@echo "skipping busybox (not configured)"

endif

LOC = https://busybox.net/downloads/
APP = busybox-1.29.3
FILE = $(APP).tar.bz2

export LINUX_VER_STR TOOLCHAIN_PREFIX
CONFIG_ID_FILE = $(APP)/CONFIG_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
PATCH_ID_FILE = $(APP)/PATCH_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
SOURCE_ID_FILE = $(APP)/SOURCE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)

check_untar:
	if [ ! -e $(SOURCE_ID_FILE) ]; then \
		[ ! -e $(FILE) ] && wget $(LOC)/$(FILE) || true; \
		(tar xkjf $(FILE) 2> /dev/null || true); \
	fi
	@echo "BUSYBOX is untarred"
	@touch $(SOURCE_ID_FILE)

check_patch: check_untar
#	[ ! -e $(PATCH_ID_FILE) ] && quilt push -a || true
	@echo "BUSYBOX is patched"
	touch $(PATCH_ID_FILE)

check_config: check_patch
	if [ ! -e $(CONFIG_ID_FILE) ]; then \
		$(MAKE) -C $(APP) distclean; \
		cp busybox.defconfig $(APP)/.config; \
	fi
	@echo "BUSYBOX is configured"
	touch $(CONFIG_ID_FILE)

all: check_config
	$(MAKE) -C $(APP)
	$(MAKE) -C $(APP) CONFIG_PREFIX=$(INSTALL_DIR) install
	@echo "BUSYBOX is installed"

shell:
	bash -i
