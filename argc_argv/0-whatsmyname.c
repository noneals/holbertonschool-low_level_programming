#include <stdio.h>

/**
 * main - Prints the program name
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc; /* suppress unused variable warning */
	printf("%s\n", argv[0]);

	return (0);
}
