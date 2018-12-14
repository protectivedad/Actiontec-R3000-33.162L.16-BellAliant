#!/bin/sh

IPT=/bin/iptables
EBT=/bin/ebtables

iptables_stop() {
  # die if iptables not found
  [[ -x "$IPT" ]] || { echo "$0: \"${IPT}\" command not found."; exit 0; }
  $IPT -P INPUT ACCEPT
  $IPT -P FORWARD ACCEPT
  $IPT -P OUTPUT ACCEPT
  $IPT -F
  $IPT -X
  $IPT -t nat -F
  $IPT -t nat -X
  $IPT -t mangle -F
  $IPT -t mangle -X
}

ebtables_stop() {
  # die if ebtables not found
  [[ -x "$EBT" ]] || { echo "$0: error \"$EBT\" not found."; exit 0; }

  # Let us start
  for p in INPUT FORWARD OUTPUT
  do
    echo "Accepting $p"
    $EBT -P $p ACCEPT
  done
  for T in filter nat broute
    do
    echo "Flushing and deleting $T..."
    $EBT -t $T -F
    $EBT -t $T -X
  done
}

unload_module() {
  local module_name="$1"
  grep -q -s "$module_name " /proc/modules
  [ $? = 1 ] && return 0
  echo Unloading $module_name
  rmmod -w $module_name
}

unload_modules() {
  local module_list="$1"
  for kernel_module in $module_list; do
    unload_module $kernel_module
  done
}

unload_nf_xt_ipt_modules() {
  xt_modules='xt_LOG xt_mark xt_DSCP xt_conntrack xt_SKIPLOG xt_state xt_limit xt_dos xt_connmark xt_dscp xt_pkttype xt_mac xt_length xt_multiport xt_TCPMSS'
  unload_modules "$xt_modules"

  ipt_modules='iptable_nat iptable_mangle iptable_filter ip_tables ip6table_mangle ip6table_filter ip6_tables ip6t_REJECT'
  unload_modules "$ipt_modules"

  nf_modules='nfnetlink_queue nfnetlink nf_nat nf_conntrack_ipv6 nf_conntrack_ipv4 nf_defrag_ipv6 nf_defrag_ipv4 nf_conntrack'
  unload_modules "$nf_modules"
}

stop() {

  echo "Stopping firewall and allowing everyone..."
  iptables_stop
  ebtables_stop
  unload_nf_xt_ipt_modules

}

case "$1" in
	start)
		echo "Doing nothing at all..."
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

