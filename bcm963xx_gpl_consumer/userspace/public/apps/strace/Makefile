
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

APP = strace
VERS = 4.25
FILE = $(APP)-$(VERS).tar.xz
LOC = https://strace.io/files/$(VERS)

CONFIGURE_VARS := 

CONFIGURE_ARGS := \
	--host=$(TOOLCHAIN_PREFIX) \
	--target=$(TOOLCHAIN_PREFIX) \
	--disable-developer \
	--prefix=$(INSTALL_DIR) \
	--sbindir=$(INSTALL_DIR)/bin

export LINUX_VER_STR TOOLCHAIN_PREFIX
CONFIG_ID_FILE = $(APP)-CONFIG_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
PATCH_ID_FILE = $(APP)-PATCH_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
SOURCE_ID_FILE = $(APP)-SOURCE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)

.PHONY: conditional_build

ifneq ($(strip $(BUILD_STRACE)),)

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
	touch $(SOURCE_ID_FILE)

check_patch: check_untar
	@echo "$(APP) is patched"
	touch $(PATCH_ID_FILE)

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
	rm -rf $(INSTALL_DIR)/share

else
conditional_build: sanity_check
	@echo "skipping $(APP) (not configured)"
endif

shell:
	bash -i
