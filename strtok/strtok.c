#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str[] = "C is not fun", *token, *delim = " ";

	token = strtok(str, delim);
	while (token)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
