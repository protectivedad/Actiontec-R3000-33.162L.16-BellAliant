
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

APP = dropbear
VERS = 2017.75
FILE = $(APP)-$(VERS).tar.bz2
LOC = https://matt.ucc.asn.au/dropbear/releases

CONFIGURE_VARS := \
	ac_cv_linux_vers=$(LINUX_VER_STR) \
	PKG_CONFIG_LIBDIR=$(BCM_FSBUILD_DIR)/public/lib \
	PKG_CONFIG_PATH=$(BCM_FSBUILD_DIR)/public/lib/pkgconfig \
	CFLAGS='-I$(BCM_FSBUILD_DIR)/public/include' \
	LDFLAGS='-L$(INSTALL_DIR)/lib -L$(BCM_FSBUILD_DIR)/public/lib'

CONFIGURE_ARGS := \
	--host=$(TOOLCHAIN_PREFIX) \
	--prefix=/ \
	--disable-lastlog

export LINUX_VER_STR TOOLCHAIN_PREFIX
CONFIG_ID_FILE = $(APP)-CONFIG_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
PATCH_ID_FILE = $(APP)-PATCH_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
SOURCE_ID_FILE = $(APP)-SOURCE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)

.PHONY: conditional_build clean distclean

ifneq ($(strip $(BUILD_SSHD)),)

$(FILE): 
	wget -O $(FILE) $(LOC)/$(FILE)

$(SOURCE_ID_FILE): $(FILE)
	mkdir -p $(APP)
	(tar -C $(APP) --strip-components=1 -xkf $(FILE) 2> /dev/null || true)
	@touch $(SOURCE_ID_FILE)
	@echo "$(APP) is untarred"

$(PATCH_ID_FILE): $(SOURCE_ID_FILE)
	[ ! -e $(PATCH_ID_FILE) ] && quilt push -a  1>>$(PATCH_ID_FILE) 2>&1 || true
	@echo "$(APP) is patched"

$(CONFIG_ID_FILE): $(PATCH_ID_FILE)
	$(MAKE) clean
	cd $(APP); $(CONFIGURE_VARS) ./configure $(CONFIGURE_ARGS)
	touch $(CONFIG_ID_FILE)
	@echo "$(APP) is configured"

conditional_build: $(CONFIG_ID_FILE)
	$(MAKE) -C dropbear DESTDIR=$(INSTALL_DIR) PROGRAMS="dropbear dropbearkey scp" strip install
	rm -rf $(INSTALL_DIR)/share

clean:
	-$(MAKE) -C $(APP) distclean
	-rm $(CONFIG_ID_FILE)

distclean:
	-rm -rf $(APP) $(CONFIG_ID_FILE) $(PATCH_ID_FILE) $(SOURCE_ID_FILE)

else
conditional_build: sanity_check
	@echo "skipping $(APP) (not configured)"
endif

shell:
	bash -i
