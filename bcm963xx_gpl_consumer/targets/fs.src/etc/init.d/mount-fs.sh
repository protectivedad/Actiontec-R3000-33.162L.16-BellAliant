#!/bin/sh

pivot_home() {
	for d in proc sys mnt var data bootfs dev; do
		mkdir -p /home/$d
		/home/bin/mount -o move /$d /home/$d
	done

	mkdir -p /home/oldroot
	/home/sbin/pivot_root /home /home/oldroot

	kill -HUP 1
}

case "$1" in
	start)
		echo "Mounting filesystems..."
		/bin/mount -a

		# Make a temporary dev point
		mkdir -p /var/dev
		mount -n -t tmpfs -o "exec,nosuid,mode=0755,size=10M" mdev-tmpfs /var/dev

		# Copy over all the readonly information
		cp -af /dev/* /var/dev/

		# Fix the fuse entry to not be a link
		[ -L /var/dev/fuse ] && rm -f /var/dev/fuse || true
		mknod -m 666 /var/dev/fuse c 10 229

		# Move it over the old dev point
		mount --move /var/dev /dev
		umount /var/dev && rm -rf /var/dev

                # Add devpts support
                mount -t devpts devpts /dev/pts

		# Fix fuse mount point to link back to dev
		[ -L /dev/misc/fuse ] && ln -sf /dev/fuse /dev/misc/fuse || true

		mkdir -p /var/log /var/run /var/state/dhcp /var/ppp /var/udhcpd /var/zebra /var/siproxd /var/cache /var/tmp /var/samba /var/samba/share /var/samba/homes /var/samba/private /var/samba/locks
		cp  /etc/smb.conf /var/samba/ 2>/dev/null

		if [ -e /data/.pivot_once -o -e /data/.pivot_perm ]; then
			ubiattach -m1 -d1 && mount -t ubifs ubi1:rootfs_pivot /home
			if [ -e /data/.pivot_once -a -e /home/sbin/pivot_root ]; then
				rm -f /data/.pivot_once /data/.pivot_perm
				pivot_home
			elif [ -e /data/.pivot_perm -a -e /home/sbin/pivot_root ]; then
				pivot_home
			fi
		fi

		exit 0
		;;

	stop)
		sync
		echo "Unmounting filesystems..."
		/bin/umount -a
		exit 0
		;;

	*)
		echo "$0: unrecognized option $1"
		;;

esac

