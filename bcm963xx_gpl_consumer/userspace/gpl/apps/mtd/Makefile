#
# In most cases, you only need to modify this first section.
#

all: build

CURR_DIR := $(shell pwd)
BUILD_DIR:=$(subst /userspace, /userspace,$(CURR_DIR))
BUILD_DIR:=$(word 1, $(BUILD_DIR))
include $(BUILD_DIR)/make.common

APP=mtd-utils

CONFIGURE_VARS := \
	PKG_CONFIG_LIBDIR=$(BCM_FSBUILD_DIR)/public/lib \
	PKG_CONFIG_PATH=$(BCM_FSBUILD_DIR)/public/lib/pkgconfig \
	CROSS=$(CROSS_COMPILE)

CONFIGURE_ARGS := \
	--host=$(TOOLCHAIN_PREFIX) \
	--prefix=$(INSTALL_DIR) --sbindir=$(INSTALL_DIR)/bin \
	--without-xattr \
	--without-ubifs --without-jffs \
	--disable-tests

ifeq ($(strip $(BUILD_MTDUTILS)),y)
build: 
	[ ! -e $(APP)/autogen.sh ] && \
	   git clone --branch v2.0.2 --depth 1 git://git.infradead.org/mtd-utils.git || true
	[ ! -e $(APP)/configure ] && \
	   cd $(APP) ; ./autogen.sh || true
	[ ! -e $(APP)/Makefile ] && \
	   cd $(APP) ; $(CONFIGURE_VARS) ./configure $(CONFIGURE_ARGS) || true
	$(MAKE) -C $(APP)
	$(MAKE) -C $(APP) install-exec-am
else
build:
	@echo "Skipping nand utils  (not configured)"
endif

clean: 
	-$(MAKE) -C $(APP) uninstall
	git -C $(APP) clean -dfX

# Shell target permits creating an interacive shell for debugging
shell:
	bash -i


