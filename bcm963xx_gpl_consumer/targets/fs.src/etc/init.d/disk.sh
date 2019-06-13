#The following will be populated by buildFS during the make process:
KERNELVER=3.4.11-rt19

case $1 in
suspend)
	grep ^/dev/sd /proc/mounts | while read d r t o; do
		umount $r || umount -f $r
	done
	while read h s c c i i l l; do
		case $h in Host:)
		echo scsi remove-single-device ${s#scsi} $c $i $l > /proc/scsi/scsi ;;
		esac
	done < /proc/scsi/scsi
	for f in xhci-hcd ohci-hcd ehci-hcd bcm63xx_usb ahci_platform bcm63xx_sata; do
		rmmod -w $f 2>/dev/null
	done ;;
resume)
	lib=/lib/modules/$KERNELVER/kernel
	for f in bcm63xx_sata ahci_platform bcm63xx_usb ehci-hcd ohci-hcd xhci-hcd; do
		test -e $lib/*/*/*/$f.ko && insmod $lib/*/*/*/$f.ko
		test -e $lib/*/*/$f.ko && insmod $lib/*/*/$f.ko
	done ;;
esac
