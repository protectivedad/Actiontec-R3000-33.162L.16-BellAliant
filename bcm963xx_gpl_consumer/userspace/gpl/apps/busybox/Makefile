
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

ifeq ($(strip $(BRCM_IKOS)),y)
BRCMCONFIG=ikos.config
else
BRCMCONFIG=brcm.config
endif
export BRCMCONFIG

PERL5LIB=$(HOSTTOOLS_PERL_LIB)
export PERL5LIB

$(CONFIG_ID_FILE) : $(PATCH_ID_FILE)
	$(MAKE) clean
	cd busybox; chmod -f +w .config .config.old ; cp -f .config .config.old; cat ../$(BRCMCONFIG) > .config ; \
	for i in ../config.d/[0-9]*.conf ; do echo "config script $$i" ; perl $$i ; done
	$(MAKE) -C $(APP) oldconfig 1>$(CONFIG_ID_FILE) 2>&1
	echo "$(APP) is configured"

$(COMPILE_ID_FILE) : $(CONFIG_ID_FILE)
	$(MAKE) -C $(APP) 1>$(COMPILE_ID_FILE) 2>&1

install: $(COMPILE_ID_FILE)
	$(MAKE) -C $(APP) install
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
