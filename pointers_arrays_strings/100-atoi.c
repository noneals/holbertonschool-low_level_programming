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
			;
		i++;
	}

	/* Build number as negative to avoid overflow */
	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		result = result * 10 - digit; /* always subtract digit */
		i++;
	}

	/* If sign is positive, flip the result */
	if (sign == 1)
		return (-result);

	return (result);
}
