#include <stdio.h>
#include <bma2x2.h>
#include <linux/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <errno.h>
#include <assert.h>
#include <string.h>


int main(int argc, char **argv)
{
    bma2x2_t bma2x2;
    bma2x2acc_t acc;
    bma2x2_init(&bma2x2);
    printf("init ok: %x\n", bma2x2.chip_id);
    bma2x2_read_accel_xyz(&acc);
    printf("data|| x:%x y:%x z:%x\n", acc.x&0xFFF, acc.y&0xFFF, acc.z&0xFFF);
    return 0;
}
