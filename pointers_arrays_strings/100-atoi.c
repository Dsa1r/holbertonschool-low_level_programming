#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The converted integer, or 0 if no numbers found
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			if (started)
				break;
			sign *= -1;
		}
		else if (s[i] == '+')
		{
			if (started)
				break;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (started)
		{
			break;
		}
		i++;
	}

	return (result * sign);
}

