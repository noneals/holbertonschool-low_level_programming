#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - selects the correct operation function
 * @s: operator as string
 *
 * Return: pointer to corresponding function, or NULL if not found
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
	int i = 0;

	while (ops[i].op && strcmp(ops[i].op, s) != 0)
		i++;

	return (ops[i].op ? ops[i].f : NULL);
}
