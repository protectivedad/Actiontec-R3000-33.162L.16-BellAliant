#!/bin/sh

ubiattach -m1
mount -t ubifs ubi1:rootfs_pivot /home

