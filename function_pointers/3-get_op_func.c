#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Function that selects the correct function
 * to perform the operation asked by the user.
 * @s: operator passed as argument to the program.
 *
 * Return: If s does not match any of the 5
 * expected operators (+, -, *, /, %), return NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	i = 0;
	while (ops[i].op)
	{
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
			i++;
		}
		return (0);
	}
}
