#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
	pid_t pid;

	printf("Before fork, I was one\n");
	pid = fork();
	if (pid == -1)
	{
		perror("Unsucessful");
		return (1);
	}
	printf("After fork, I was two\n");
	return (0);
}
