
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

CONFIG_ID_FILE = $(CURR_DIR)/$(APP)-CONFIG_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
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

$(CONFIG_ID_FILE) : $(SOURCE_ID_FILE)
	$(MAKE) clean
	cp busybox.defconfig $(APP)/.config
	$(MAKE) -C $(APP) oldconfig 1>$(CONFIG_ID_FILE) 2>&1
	echo "$(APP) is configured"

$(COMPILE_ID_FILE) : $(CONFIG_ID_FILE)
	$(MAKE) -C $(APP) busybox 1>$(COMPILE_ID_FILE) 2>&1

install: $(COMPILE_ID_FILE)
	mkdir -p $(INSTALL_DIR)/flash/bin
	cp $(APP)/busybox $(INSTALL_DIR)/flash/bin
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
