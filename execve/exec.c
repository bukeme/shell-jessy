#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(void)
{
	pid_t pid;
	int val;

	char *argv[] = {"/bin/ls", "-l", NULL};

	pid = fork();

	if (pid == -1)
	{
		perror("Error in chid process");
		return (-1);
	}

	if (pid == 0)
	{
		val = execve(argv[0], argv, NULL);

		if (val == -1)
		{
			perror("Execution Error");
		}
	}
	else
	{
		wait(NULL);
		printf("Done with execve\n");
	}
	return (0);
}
