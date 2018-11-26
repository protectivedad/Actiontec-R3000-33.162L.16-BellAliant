#!/bin/bash

sudo -E unshare -m sudo -E -u $USER /bin/bash -i <<< '. setup_bash_shell.sh; exec </dev/tty'
