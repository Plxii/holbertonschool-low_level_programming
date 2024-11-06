#include <stdio.h>

/**
 * main - Program that prints its name, followed by a new line.
 * @argc: Number of arguments passed to program.
 * @argv: Tableau des arguments sous forme de chaînes de caractères.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = [%s]\n", i, argv[i]);
	}
	return (0);
}
