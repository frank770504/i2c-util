#include <stdio.h>
#include <linux/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>


extern int i2c_read_reg(char *dev, unsigned char *buf, unsigned slave_address, unsigned reg_address, int len);


extern int i2c_write_reg(char *dev, unsigned char *buf, unsigned slave_address, unsigned reg_address, int len);
