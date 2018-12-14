
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

APP = libpcap
VERS = 1.1.1
FILE = $(APP).tar.gz
LOC = 

CONFIGURE_VARS := \
	ac_cv_linux_vers=$(LINUX_VER_STR)

CONFIGURE_ARGS := \
	--host=$(TOOLCHAIN_PREFIX) \
	--with-pcap=linux \
	--prefix=$(BCM_FSBUILD_DIR)/public

export LINUX_VER_STR TOOLCHAIN_PREFIX
CONFIG_ID_FILE = $(APP)/CONFIG_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
PATCH_ID_FILE = $(APP)/PATCH_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
SOURCE_ID_FILE = $(APP)/SOURCE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)

conditional_build: all

ifneq ($(strip $(BUILD_LIBPCAP)),)

clean:
	rm -f $(INSTALL_DIR)/lib/public/libpcap.so*
	-[ -e libpcap/Makefile ] && cd libpcap && make clean uninstall
	rm -f libpcap/net

distclean: clean
	rm -f libpcap/BRCM_CONFIG_ID_*
	-[ -e libpcap/Makefile ] && cd libpcap && make distclean

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
	mkdir -p $(INSTALL_DIR)/lib/public/
	$(MAKE) -C $(APP)
	$(MAKE) -C $(APP) install
	cp -d $(BCM_FSBUILD_DIR)/public/lib/libpcap.so* $(INSTALL_DIR)/lib/public/

else
conditional_build:
	@echo "skipping $(APP) (not configured)"
endif

shell:
	bash -i
