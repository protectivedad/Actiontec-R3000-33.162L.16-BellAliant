#!/bin/sh
#
# Starts dropbear sshd.
#

start() {
	DROPBEAR_ARGS="-p 22 -r /data/dropbear/dropbear_ecdsa_host_key -r /data/dropbear/dropbear_rsa_host_key"

	# Open firewall to receive connections
	iptables -D INPUT -i br0 -p tcp -m tcp --dport 22 -j DROP

	# Give root user a home directory
	sed -i -e 's/:Administrator:\/:/:Administrator:\/data\/dropbear:/g' /var/passwd

	umask 077
	/usr/sbin/dropbear $DROPBEAR_ARGS
}
stop() {
	kill `cat /var/run/dropbear.pid`
	iptables -A INPUT -i br0 -p tcp -m tcp --dport 22 -j DROP
}
restart() {
	stop
	start
}

case "$1" in
  start)
  	start
	;;
  stop)
  	stop
	;;
  restart|reload)
  	restart
	;;
  *)
	echo "Usage: $0 {start|stop|restart}"
	exit 1
esac

exit $?
