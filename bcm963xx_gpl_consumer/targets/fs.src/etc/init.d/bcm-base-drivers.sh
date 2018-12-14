#!/bin/sh

trap "" 2

#The following will be populated by buildFS during the make process:
KERNELVER=`uname -r`

load_modules() {
	# RDPA
	modprobe bdmf bdmf_chrdev_major=215
	modprobe rdpa_gpl
	modprobe rdpa sysinit=1
	/etc/rdpa_init.sh
	modprobe rdpa_mw

	# General
	modprobe chipinfo
	modprobe bcm_enet
	modprobe nciTMSkmod

	#load platform modules
	modprobe bcm63xx_sata
	modprobe bcm63xx_usb

	#load SATA/AHCI modules
	for f in libata libahci ahci ahci_platform; do modprobe $f; done

	# WLAN accelerator module
	modprobe wfd

	#WLAN Module
	modprobe wlcsm
	modprobe wlemf
	modprobe dhd firmware_path=/etc/wlan/dhd mfg_firmware_path=/etc/wlan/dhd/mfg
	modprobe wl

	# other modules
	modprobe bcmvlan
	modprobe pwrmngtd

	# watchdog
	modprobe bcm963138wdt

	find /sys -name 'modalias' -type f -exec cat '{}' + | sort -u | xargs -n1 modprobe 2>/dev/null
	sleep 5
	find /sys -name 'modalias' -type f -exec cat '{}' + | sort -u | xargs -n1 modprobe 2>/dev/null
}

if [ ! -d /lib/modules/$KERNELVER/extra ]; then
	echo "ERROR: bcm-base-drivers.sh: /lib/modules/$KERNELVER/extra does not exist" 1>&2
fi

[ ! -f /lib/modules/$KERNELVER/modules.dep.bb ] && depmod
[ ! -f /lib/modules/$KERNELVER/modules.dep ] && ln -s  /lib/modules/$KERNELVER/modules.dep.bb  /lib/modules/$KERNELVER/modules.dep

case "$1" in
	start)
		echo "Loading drivers and kernel modules... "
		echo

		load_modules

		exit 0
		;;

	stop)
		echo "removing bcm base drivers not implemented yet..."
		exit 1
		;;

	*)
		echo "bcmbasedrivers: unrecognized option $1"
		exit 1
		;;

esac


