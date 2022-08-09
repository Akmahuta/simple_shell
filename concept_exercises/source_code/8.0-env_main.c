#include <stdio.h>

/**
 * main - prints the environment
 *
 * Return: Always 0.
 * @ac: argument counter
 * @av: array containing argumets
 * @env: a pointer to the environmental variable
 */
int main(int ac, char **av, char **env)
{
	unsigned int i;

	i = 0;
	while (env[i] != NULL)
	{
	printf("%s\n", env[i]);
	i++;
	}
	return (0);
}
