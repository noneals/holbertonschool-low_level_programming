#include <stdio.h>

/**
 * main - prints the program name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
    (void)argc; /* suppress unused variable warning */
    printf("%s\n", argv[0]);
    return (0);
}
