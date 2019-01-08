#!/bin/sh

echo $0 $1 $2 $3 $4 $5 >>/home/anthony/cross-execute.log

run_command=`basename $1`
date_ext=`date +%T`
saved_command=$run_command.$date_ext

[ -e $1 ] && scp $1 r3000:/var/$saved_command
[ $? -gt 0 ] && echo ******************************************************ERROR****************************************************

ssh r3000 ". /etc/profile; exec /var/$saved_command $2 $3"

exit $?