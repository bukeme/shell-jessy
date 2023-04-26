#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("Unsucessful");
		return (-1);
	}

	if (pid == 0)
	{
		sleep(5);
		printf("I'm in the child process\n");
	}
	else
		printf("I'm in the parent process\n");
	return (0);
}
