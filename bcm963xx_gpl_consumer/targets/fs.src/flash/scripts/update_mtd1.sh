#!/bin/sh

ubiimg=$1
ubidev=/dev/mtd1

echo Removng /data/.pivot_perm for safety.
[ -e /data/.pivot_perm ] && rm /data/.pivot_perm || true

ubiformat $ubidev -f $ubiimg

/data/scripts/pivot_after_boot.sh

echo Adding /data/.mount_pivot and
echo /data/.pivot_once for testing.
[ ! -e /data/.pivot_once ] && touch /data/.mount_pivot /data/.pivot_once || true
