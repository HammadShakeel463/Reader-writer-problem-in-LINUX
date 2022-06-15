#include<linux/kernel.h>
#include<sys/syscall.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>

#define __NR_rw 440

long rw_syscall(void)
{
	return syscall(__NR_rw);
}

int main(){

	long activity ;
	activity = rw_syscall();
	
	if(activity < 0 )
	{
		perror("System call failed. ");
	}
	else
	{
		printf("System call is functional.\n" );
	}

	return 0 ;
}

