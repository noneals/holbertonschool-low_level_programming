#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	/* Skip non-digit characters and handle signs */
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

	/* Build number as negative to safely handle INT_MIN */
	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		result = result * 10 - digit; /* keep negative to avoid overflow */
		i++;
	}

	/* If sign is positive, flip result */
	if (sign == 1)
		return (-result);

	return (result);
}
