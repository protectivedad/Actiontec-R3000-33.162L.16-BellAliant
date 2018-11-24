#!/bin/bash
# Switch sh to bash for this session

sudo unshare -m sudo -u $USER /bin/bash
sudo mount --bind /bin/bash /bin/sh

exit $?
