#***********************************************************************
#
#  Copyright (c) 2006  Broadcom Corporation
#  All Rights Reserved
#
#***********************************************************************/


#
# You do not need to modify this Makefile to add an app.
# Simply create a .autodetect in the subdir and this Makefile will enter
# that directory during make and make clean.  (Auto detected directories
# are listed in the AUTODETECT_SUBDIRS variable.  Type make show_subdirs)
#
ifneq ($(strip $(AEI_CONTROL_LAYER)),)
HARDCODED_SUBDIRS := dhcpv6-aei sshd ledctl dhrystone radvd tcpdump dropbear
else
HARDCODED_SUBDIRS := dhcpv6 sshd ledctl dhrystone radvd dropbear
endif


ifneq ($(strip $(AEI_VDSL_STUND)),)
HARDCODED_SUBDIRS += stund
endif

SUBDIRS = $(HARDCODED_SUBDIRS) \
          $(AUTODETECT_SUBDIRS_BASE)


# === this is the default target ===
# Need to add a level of indirection here so that AUTODETECT_SUBDIRS and
# MODSW_SUBDIRS can be populated in make.common/make.modsw before we build.
#
all : make_all_subdirs


#
# Set our CommEngine directory (by splitting the pwd into two words
# at /userspace and taking the first word only).
# Then include the common defines under CommEngine.
# You do not need to modify this part.
#
CURR_DIR := $(shell pwd)
BUILD_DIR:=$(subst /userspace, /userspace,$(CURR_DIR))
BUILD_DIR:=$(word 1, $(BUILD_DIR))
export BUILD_DIR

include $(BUILD_DIR)/make.common

# include make.modsw for autodetect variables
include $(BUILD_DIR)/make.modsw


# don't know why these 4 lines are here, probably should delete
ifneq ($(strip $(BUILD_VODSL)),)
include $(BUILD_DIR)/make.voice
endif
export CFLAGS
# delete above 4 lines?


#
# We need to declare these directory names as phony targets,
# otherwise make will think the directories themselves are
# the targets and will never execute the cmds.
# See GNU Make, 4.6 
#
.PHONY : $(SUBDIRS)

ifneq ($(strip $(AEI_CONTROL_LAYER)),)
base : $(SUBDIRS) pppd dhcpv6
else
base : $(SUBDIRS) pppd
endif

make_all_subdirs : base

#ifneq ($(strip $(AEI_CONTROL_LAYER)),)
#make_all_subdirs : $(SUBDIRS) pppd dhcpv6
#else
#make_all_subdirs : $(SUBDIRS) pppd
#endif

clean: generic_subdir_clean
	$(MAKE) -C ppp/pppoe clean



##############################################################
# 
# Rules for inidividual apps
# apps can be compiled or not depending on the profile (which
# is modified via make menuconfig)
#
##############################################################


$(AUTODETECT_SUBDIRS_BASE): 
	$(MAKE) -C $@

dropbear:
	@if [ ! -e dropbear/INSTALL ]; then \
	    [ ! -e dropbear.tar.bz2 ] && wget -q -O dropbear.tar.bz2 https://matt.ucc.asn.au/dropbear/releases/dropbear-2017.75.tar.bz2 || true; \
	    mkdir -p dropbear; \
	    (tar -C dropbear --strip-components=1 -xkjf dropbear.tar.bz2 2> /dev/null || true); \
	fi
	@if [ ! -e dropbear/Makefile ]; then \
	    cd dropbear; ac_cv_linux_vers=$(LINUX_VER_STR) ./configure --host=$(TOOLCHAIN_PREFIX) \
	             --prefix=$(INSTALL_DIR) \
	             --libdir=$(INSTALL_DIR)/lib/gpl \
	             --sysconfdir=/data/etc \
	             --sbindir=$(INSTALL_DIR)/bin \
	             --disable-zlib \
	             --disable-utmp --disable-utmpx \
	             --disable-wtmp --disable-wtmpx \
	             --disable-lastlog \
	             LDFLAGS=-L$(INSTALL_DIR)/lib/gpl; \
	fi
	$(MAKE) -C dropbear PROGRAMS="dropbear dropbearkey scp" MULTI=1 STATIC=1
	mkdir -p $(INSTALL_DIR)/data/bin $(INSTALL_DIR)/bin
	install -m 755 dropbear/dropbearmulti $(INSTALL_DIR)/data/bin
	ln -f -s -r $(INSTALL_DIR)/data/bin/dropbearmulti $(INSTALL_DIR)/data/bin/dropbear
	ln -f -s -r $(INSTALL_DIR)/data/bin/dropbearmulti $(INSTALL_DIR)/data/bin/dropbearkey
	ln -f -s -r $(INSTALL_DIR)/data/bin/dropbearmulti $(INSTALL_DIR)/bin/scp

ifneq ($(strip $(BUILD_SSHD)),)
sshd:
	(tar xkjf sshd.tar.bz2 2> /dev/null || true)
	$(MAKE) -C sshd
else
sshd:
	@echo "skipping sshd (not configured)"
endif

ifneq ($(strip $(BUILD_IPV6)),)
ifneq ($(strip $(AEI_CONTROL_LAYER)),)
dhcpv6: sanity_check
	$(MAKE) -j1 -C dhcpv6-aei
else
dhcpv6:
	(tar xkjf dhcpv6.tar.bz2 2> /dev/null || true)
	$(MAKE) -j1 -C dhcpv6
endif

radvd:
	(tar xkjf radvd.tar.bz2 2> /dev/null || true)
	$(MAKE) -C radvd
else
dhcpv6:
	@echo "skipping dhcpv6 (not configured)"

radvd:
	@echo "skipping radvd (not configured)"
endif


ifneq ($(strip $(BUILD_PPPD)),)
pppd:
	$(MAKE) -C ppp/pppoe $(BUILD_PPPD)
else
pppd:
	@echo "skipping pppd (not configured)"
endif

ifneq ($(strip $(BUILD_LEDCTL)),)
ledctl:
	$(MAKE) -C $@
else
ledctl:
	@echo "skipping $@ (not configured)"
endif

ifneq ($(strip $(BENCHMARKS_SMP)),)
dhrystone:
	$(MAKE) -C $@
else
dhrystone:
	@echo "skipping dhrystone (not configured)"
endif

ifneq ($(strip $(BUILD_TCPDUMP)),)
tcpdump:
	$(MAKE) -C $@
else
tcpdump:
	@echo "skipping tcpdump (not configured)"
endif

ifneq ($(strip $(AEI_VDSL_STUND)),)
stund:
	$(MAKE) -C $@
else
stund:
	@echo "Skipping stund application"
endif

