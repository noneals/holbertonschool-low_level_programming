#include "main.h"

/**
 * print_triangle - prints a triangle using '#'
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* Print spaces */
		for (j = size - i; j > 0; j--)
			_putchar(' ');

		/* Print '#' characters */
		for (j = 0; j < i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
