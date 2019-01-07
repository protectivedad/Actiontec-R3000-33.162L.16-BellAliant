
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

APP = busybox
VERS = 1.29.3
FILE = $(APP)-$(VERS).tar.bz2
LOC = https://busybox.net/downloads/

#CFLAGS += -I$(BCM_FSBUILD_DIR)/public/include
#CFLAGS += -I$(BUILD_DIR)/userspace/public/include -I$(BUILD_DIR)/userspace/public/include/$(OALDIR)
CFLAGS := $(CMS_COMPILE_FLAGS) $(CMS_INCLUDE_PATHS)
#CFLAGS += $(CMS_LOG_FLAGS)
#CFLAGS += -I$(TOOLCHAIN)/include
#CFLAGS += $(BRCM_WERROR_CFLAGS)
#CFLAGS += -I$(KERNEL_LINKS_DIR)
#LDFLAGS += -Wl,-L$(TOOLCHAIN)/lib
#LDFLAGS += -Wl,-L$(TOOLCHAIN)/mips-linux/lib -L$(INSTALL_DIR)/lib -L$(INSTALL_DIR)/lib/public
#LDLIBS +=  cms_msg cms_util cms_boardctl resolv m
#LDLIBS :=  m

export CFLAGS := $(filter-out -Darm,$(CFLAGS))

export LINUX_VER_STR TOOLCHAIN_PREFIX
CONFIG_ID_FILE = $(CURR_DIR)/$(APP)-CONFIG_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
PATCH_ID_FILE = $(CURR_DIR)/$(APP)-PATCH_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
SOURCE_ID_FILE = $(CURR_DIR)/$(APP)-SOURCE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
COMPILE_ID_FILE = $(CURR_DIR)/$(APP)-COMPILE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)

.PHONY: install clean distclean
.SILENT:

ifneq ($(strip $(BUILD_BUSYBOX)),)

$(FILE):
	wget -O $(FILE) $(LOC)/$(FILE)

$(SOURCE_ID_FILE) : $(FILE)
	mkdir -p $(APP)
	(tar -C $(APP) --strip-components=1 -xkf $(FILE) 1>$(SOURCE_ID_FILE) 2>&1 || true)
	echo "$(APP) is untarred"

$(PATCH_ID_FILE) : $(SOURCE_ID_FILE)
	[ ! -e $(PATCH_ID_FILE) ] && quilt push -a  1>>$(PATCH_ID_FILE) 2>&1 || true
	echo "$(APP) is patched"

$(CONFIG_ID_FILE) : $(PATCH_ID_FILE)
	$(MAKE) clean
	cp busybox.defconfig $(APP)/.config
	$(MAKE) -C $(APP) oldconfig 1>$(CONFIG_ID_FILE) 2>&1
	echo "$(APP) is configured"

$(COMPILE_ID_FILE) : $(CONFIG_ID_FILE)
	$(MAKE) -C $(APP) busybox 1>$(COMPILE_ID_FILE) 2>&1

install: $(COMPILE_ID_FILE)
	$(MAKE) -C $(APP) install
	cp -a $(APP)/_install/. $(INSTALL_DIR)/
	echo "$(APP) is installed"

else
install: sanity_check
	echo "skipping $(APP) (not configured)"
endif

clean:
	[ -e $(APP)/.config ] && $(MAKE) -C $(APP) distclean || true
	-rm $(APP)-CONFIG_ID_* $(APP)-COMPILE_ID_*

distclean:
	rm -rf .pc $(APP) $(APP)-*_ID_*

shell:
	$(CONFIGURE_VARS) bash -i
