#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 5, b = 3;
	pid_t ppid;

	ppid = getppid();
	printf("The difference is: ", a - b);
	printf("The parent process id is: ", ppid);
}
