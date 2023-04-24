#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 5, b = 3;
	pid_t pid;

	pid = getpid();
	printf("The sum is: %d\n", a + b);
	printf("The process id is: %u", pid);
}
