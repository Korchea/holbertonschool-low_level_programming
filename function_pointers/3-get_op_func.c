#include "3-calc.h"

/**
 * get_op_func - 'Selects the correct function to perform the operation asked.'
 * @s: Is the operator passed as argument to the program.
 * Return: A pointer to the punction the corresponds to the operator given.
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

	i = 0;
	while (ops[i].op != NULL && *ops[i].op != *s)
	{
		i++;
	}
	if (*ops[i].op != *s)
	{
		return (NULL);
	}
	return (*ops[i].f);
}
