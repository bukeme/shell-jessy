#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(void)
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("Unsuccessful");
		return (1);
	}

	if (pid == 0)
	{
		printf("I'm in the child process\n");
	}
	else
	{
		wait(NULL);
		sleep(5);
		printf("I'm in the parent process\n");
	}
	return (0);
}
