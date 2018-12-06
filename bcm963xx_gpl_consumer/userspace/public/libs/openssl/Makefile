
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

APP = OpenSSL
VERS = 1_0_1u
FILE = $(APP)_$(VERS).tar.gz
LOC = https://github.com/openssl/openssl/archive

CONFIGURE_VARS := \
	PKG_CONFIG_LIBDIR=$(BCM_FSBUILD_DIR)/public/lib \
	PKG_CONFIG_PATH=$(BCM_FSBUILD_DIR)/public/lib/pkgconfig \
	CROSS_COMPILE=

CONFIGURE_ARGS := \
	--prefix=$(BCM_FSBUILD_DIR)/public \
	zlib-dynamic \
	--with-zlib-include='$(BCM_FSBUILD_DIR)/public/include' \
	no-hw shared no-bf no-cast no-md2 no-mdc2 no-ripemd no-rc2 no-unit-test no-static-engine no-engine no-idea \
	linux-armv4

export LINUX_VER_STR TOOLCHAIN_PREFIX
CONFIG_ID_FILE = $(APP)/CONFIG_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
PATCH_ID_FILE = $(APP)/PATCH_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)
SOURCE_ID_FILE = $(APP)/SOURCE_ID_$(TOOLCHAIN_PREFIX)_$(LINUX_VER_STR)

.PHONY: conditional_build

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
	@touch $(SOURCE_ID_FILE)

check_patch: check_untar
	@echo "$(APP) is patched"
	@touch $(PATCH_ID_FILE)

check_config: check_patch
	[ ! -e $(CONFIG_ID_FILE) ] && ( \
		cd $(APP); \
		$(MAKE) distclean; \
		$(CONFIGURE_VARS) ./Configure $(CONFIGURE_ARGS); \
		$(MAKE) depend;) || true
	@echo "$(APP) is configured"
	@touch $(CONFIG_ID_FILE)

conditional_build: check_config
	$(MAKE) -C $(APP) all
	mkdir -p $(INSTALL_DIR)/lib/public/
	$(MAKE) -C $(APP) install_sw
	cp -fd $(BCM_FSBUILD_DIR)/public/lib/libcrypto.so* $(INSTALL_DIR)/lib/public/
	cp -fd $(BCM_FSBUILD_DIR)/public/lib/libssl.so* $(INSTALL_DIR)/lib/public/

clean:
	git -C openssl clean -f

distclean: clean
	git -C openssl checkout

shell:
	bash -i
