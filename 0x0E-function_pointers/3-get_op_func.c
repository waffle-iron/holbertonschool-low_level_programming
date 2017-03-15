#include "3-calc.h"
/**
 * get_op_func - function to select correct operation
 * @s: operator passed as argument to the program
 * Return: funciton pointer to correct operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5, i++)
	{
		if (ops[i])
			return (ops[i]);
	}
	return (NULL);
}
