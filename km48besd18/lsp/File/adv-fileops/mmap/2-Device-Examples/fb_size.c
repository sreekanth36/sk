
// To Get monitor resolution - frame buffer size

#include <linux/fb.h> // display sub system in kernel
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>

int main()
{
	int fd,ret;
	struct fb_var_screeninfo temp;
	fd = open("/dev/fb0",O_RDWR);
	if (fd < 0){
	perror("open fail");
	exit(0);
	}	
	
	ret = ioctl(fd,FBIOGET_VSCREENINFO,&temp);
	if (ret < 0){
	perror("ioctl fail");
	exit(0);
	}	

	printf("xres:%d yres:%d bits_per_pixel:%d\n",temp.xres,temp.yres,temp.bits_per_pixel);



}
