cmd_/home/dslsqa/rel1.2/src/buildroot-2011.11/output/toolchain/linux/include/linux/mmc/.install := perl scripts/headers_install.pl /home/dslsqa/rel1.2/src/buildroot-2011.11/output/toolchain/linux-3.4/include/linux/mmc /home/dslsqa/rel1.2/src/buildroot-2011.11/output/toolchain/linux/include/linux/mmc arm ioctl.h; perl scripts/headers_install.pl /home/dslsqa/rel1.2/src/buildroot-2011.11/output/toolchain/linux-3.4/include/linux/mmc /home/dslsqa/rel1.2/src/buildroot-2011.11/output/toolchain/linux/include/linux/mmc arm ; perl scripts/headers_install.pl /home/dslsqa/rel1.2/src/buildroot-2011.11/output/toolchain/linux-3.4/include/generated/linux/mmc /home/dslsqa/rel1.2/src/buildroot-2011.11/output/toolchain/linux/include/linux/mmc arm ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/dslsqa/rel1.2/src/buildroot-2011.11/output/toolchain/linux/include/linux/mmc/$$F; done; touch /home/dslsqa/rel1.2/src/buildroot-2011.11/output/toolchain/linux/include/linux/mmc/.install
