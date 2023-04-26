#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *buf;
	size_t n;

	n = 10;
	/* buf = malloc(sizeof(char) * n); */
	buf = NULL;
	printf("Enter Your Name ");
	getline(&buf, &n, stdin);

	printf("Name is %sBuffer size is %ld\n", buf, n);
	free(buf);
	return (0);
}
