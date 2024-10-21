#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("int: %lu\n", sizeof(int));
	printf("char: %lu\n", sizeof(char));
	printf("float: %lu\n", sizeof(float));
	printf("double: %lu\n", sizeof(double));
	return (0);
}
