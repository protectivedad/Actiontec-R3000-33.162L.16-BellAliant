#!/bin/sh

/data/scripts/mount_ubi1_0.sh

cd /home

mkdir -p proc sys mnt var data bootfs oldroot dev

mount -o move /proc proc/
mount -o move /sys sys/
mount -o move /mnt mnt/
mount -o move /var var/
mount -o move /data data/
mount -o move /bootfs bootfs/

/home/sbin/pivot_root /home /home/oldroot

kill -HUP 1
killall -HUP smd

/etc/init.d/dropbear.sh start
