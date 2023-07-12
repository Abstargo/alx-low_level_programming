#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');

			if ((result > 0 && result > INT_MAX / 10) ||
			    (result < 0 && result < INT_MIN / 10))
			{
				return ((sign > 0) ? INT_MAX : INT_MIN);
			}
		}
		else if (result != 0)
		{
			break;
		}

		i++;
	}

	return (result * sign);
}
