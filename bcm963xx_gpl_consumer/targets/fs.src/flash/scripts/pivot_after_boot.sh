#!/data/bin/busybox ash

/data/scripts/mount_ubi1_0.sh

cd /home

mkdir -p proc sys mnt var data bootfs oldroot dev

mount -o move /proc proc/
mount -o move /sys sys/
mount -o move /mnt mnt/
mount -o move /var var/
mount -o move /data data/
mount -o move /bootfs bootfs/

pivot_root /home /home/oldroot

kill -HUP 1

[ -e /bin/scp ] && ln -s /data/dropbear/scp /bin || true
