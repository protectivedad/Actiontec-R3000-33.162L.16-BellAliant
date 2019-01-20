#***********************************************************************
#
#  Copyright (c) 2012  Broadcom Corporation
#  All Rights Reserved
#
#***********************************************************************/

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

APP = ntfs-3g_ntfsprogs-2017.3.23
SO_VER = 88

CONFIGURE_VARS := \
	PKG_CONFIG_LIBDIR=$(BCM_FSBUILD_DIR)/public/lib \
	PKG_CONFIG_PATH=$(BCM_FSBUILD_DIR)/public/lib/pkgconfig

CONFIGURE_ARGS := \
	--host=$(TOOLCHAIN_PREFIX) \
	--target=$(TOOLCHAIN_PREFIX) \
        --disable-developer \
	--prefix=/ \
	--enable-shared \
	--enable-static \
	--with-fuse=external
clean:
	@if [ -e $(APP)/Makefile ]; then \
	cd $(APP); $(MAKE) distclean ; \
	fi

# The next line is a hint to our release scripts
# GLOBAL_RELEASE_SCRIPT_CALL_DISTCLEAN
distclean: clean
	rm -rf $(APP)

#.PHONY: check_untar_patch_configure conditional_build

ifneq ($(strip $(BUILD_NTFS_3G)),)

check_untar_patch_configure: sanity_check
	@if [ ! -e $(APP)/Makefile.in ]; then \
    	echo "Untarring original $(APP) source"; \
	    (tar xkf $(APP).tgz 2> /dev/null || true); \
    	echo "Applying patches to $(APP)"; \
	    patch -p1 -b -s -d$(APP) < $(APP).patch; \
	if [ $$? -ne 0 ]; then\
            exit 1;\
        fi; \
        fi; \
	(cd $(APP); $(CONFIGURE_VARS) ./configure $(CONFIGURE_ARGS); )

conditional_build: check_untar_patch_configure
	cd $(APP); $(MAKE) 
	cp $(APP)/libntfs-3g/.libs/libntfs-3g.so.$(SO_VER) $(INSTALL_DIR)/lib
	install -m 755 $(APP)/src/.libs/ntfs-3g  $(INSTALL_DIR)/bin/ntfs-3g
	ln -srf $(INSTALL_DIR)/bin/ntfs-3g $(INSTALL_DIR)/sbin/mount.ntfs
	install -m 755 $(APP)/ntfsprogs/.libs/mkntfs  $(INSTALL_DIR)/sbin/mkntfs
	ln -srf $(INSTALL_DIR)/sbin/mkntfs $(INSTALL_DIR)/sbin/mkfs.ntfs
else
conditional_build: sanity_check
	@echo "skipping $(APP) (not configured)"
endif
