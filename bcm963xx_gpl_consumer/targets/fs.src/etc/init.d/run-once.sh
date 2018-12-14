#!/bin/sh

SCRIPT=run-once.sh
SOURCE=/data/$SCRIPT
DEST=/var/$SCRIPT

case "$1" in
	start)
		echo "Run once..."
		# Exit if no script
		[ ! -e $SOURCE ] && exit 0

		echo "Copy script..." >>/data/run-once.log 2>&1
		# Save script for execution
		cp -f $SOURCE $DEST >>/data/run-once.log 2>&1

		echo "Remove and run..." >>/data/run-once.log 2>&1
		# Only run script if we can delete the old one
		rm $SOURCE && $DEST >>/data/run-once.log 2>&1

		exit 0
		;;

	stop)
		echo "Doing nothing..."
		exit 0
		;;

	*)
		echo "$0: unrecognized option $1"
		;;

esac

