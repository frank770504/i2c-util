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
    unsigned short ux, uy, uz;
    short x, y, z;
    while(1)
    {
        bma2x2_read_accel_xyz(&acc);
        temp.x = acc.x;
        temp.y = acc.y;
        temp.z = acc.z;
        ux = ((unsigned short)((temp.x&0x0FFF)<<4));
        uy = ((unsigned short)((temp.y&0x0FFF)<<4));
        uz = ((unsigned short)((temp.z&0x0FFF)<<4));
        x = ((short)ux);
        y = ((short)uy);
        z = ((short)uz);
        printf("%4x, %4x, %4x, %4d, %4d, %4d\n", ux, uy, uz, x, y, z);
        usleep((useconds_t)(10000));
        //i++;
    }
    return 0;
}
