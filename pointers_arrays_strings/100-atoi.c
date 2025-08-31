#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	/* Skip non-digit characters and check signs */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
		{
			/* do nothing */
		}
		i++;
	}

	/* Build number as negative to avoid overflow */
	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		result = result * 10 - digit; /* keep result negative */
		i++;
	}

	/* Flip result if sign is positive */
	if (sign == 1)
		return (-result);

	return (result);
}
