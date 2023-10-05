// Write a program to read monitor resolution 

#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <linux/fb.h>
#include <sys/ioctl.h>


int main(int argc, char *argv[])
{
	int fd1,retfd;
	char buf[4096];
	int val;
	char name[256] = "Unknown";

	struct fb_var_screeninfo temp;

	fd1=open(argv[1],O_RDONLY);
	if(fd1<0)
	{
		perror("Open Fails");
		return -1;
	}
        ioctl(fd1,FBIOGET_VSCREENINFO , &temp);
        printf("xres:%d  yres:%d  bits_per_pixel:%d\n", temp.xres,temp.yres,temp.bits_per_pixel);

	return 0;
}
		
