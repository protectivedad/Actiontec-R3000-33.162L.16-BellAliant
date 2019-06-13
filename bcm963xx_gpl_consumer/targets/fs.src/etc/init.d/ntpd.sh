#!/bin/sh

start() {

  echo "Starting network time client..."
  [ ! -e /var/run/ntpd.pid ] && /usr/sbin/ntpd || true

}

stop() {

  echo "Stopping network time client..."
  [ -e /var/run/ntpd.pid ] && kill `cat /var/run/ntpd.pid` || true

}

case "$1" in
	start)
		start
		exit 0

		;;

	stop)
		stop
		exit 0
		;;

	*)
		echo "$0: unrecognized option $1"
		;;

esac
