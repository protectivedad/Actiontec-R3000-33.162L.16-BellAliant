
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

APP = tcpdump
VERS = 4.9.2
FILE = $(APP)-$(VERS).tar.gz
LOC = http://www.tcpdump.org/release

CONFIGURE_VARS := \
	ac_cv_linux_vers=$(LINUX_VER_STR) \
	CFLAGS='-I$(BCM_FSBUILD_DIR)/public/include' \
	LDFLAGS='-L$(INSTALL_DIR)/lib/public'

CONFIGURE_ARGS := \
	--host=$(TOOLCHAIN_PREFIX) \
	--with-pcap=linux \
	--prefix=$(BCM_FSBUILD_DIR)/public

export LINUX_VER_STR TOOLCHAIN_PREFIX
CONFIG_ID_FILE = $(APP)-CONFIG_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
PATCH_ID_FILE = $(APP)-PATCH_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
SOURCE_ID_FILE = $(APP)-SOURCE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)

.PHONY: conditional_build clean distclean

ifneq ($(strip $(BUILD_TCPDUMP)),)

$(FILE):
	wget -O $(FILE) $(LOC)/$(FILE)

$(SOURCE_ID_FILE): $(FILE)
	mkdir -p $(APP)
	(tar -C $(APP) --strip-components=1 -xkf $(FILE) 2> /dev/null || true)
	@touch $(SOURCE_ID_FILE)
	@echo "$(APP) is untarred"

$(PATCH_ID_FILE): $(SOURCE_ID_FILE)
	@touch $(PATCH_ID_FILE)
	@echo "$(APP) is patched"

$(CONFIG_ID_FILE): $(PATCH_ID_FILE)
	-$(MAKE) clean
	cd $(APP); $(CONFIGURE_VARS) ./configure $(CONFIGURE_ARGS)
	@touch $(CONFIG_ID_FILE)
	@echo "$(APP) is configured"

conditional_build: $(CONFIG_ID_FILE)
	mkdir -p $(INSTALL_DIR)/bin
	$(MAKE) -C $(APP)
	$(MAKE) -C $(APP) install
	@cp -d $(BCM_FSBUILD_DIR)/public/sbin/tcpdump $(INSTALL_DIR)/bin

else
conditional_build:
	@echo "skipping $(APP) (not configured)"
endif

clean:
	rm -f $(INSTALL_DIR)/bin/tcpdump
	-make -C tcpdump clean uninstall
	rm -rf sbin share

distclean: clean
	rm -f tcpdump/BRCM_CONFIG_ID_*
	-make -C tcpdump distclean

shell:
	bash -i

