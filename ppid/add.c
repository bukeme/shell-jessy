#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
	int a = 5, b = 3;
	pid_t ppid;

	ppid = getppid();
	printf("The sum is: %d\n", a + b);
	printf("The parent process id is: %u", ppid);
}
