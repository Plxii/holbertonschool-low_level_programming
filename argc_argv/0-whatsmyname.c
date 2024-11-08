#include <stdio.h>

/**
 * main - Program that prints its name, followed by a new line.
 * @argc: Number of arguments passed to program.
 * @argv: an array of pointers to the string.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
