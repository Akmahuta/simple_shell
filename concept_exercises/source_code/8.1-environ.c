#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char **environ;
	int x = 0;

	while (environ[x])
	{
		printf("%s\n", environ[x++]);
	}

	return (0);
}
