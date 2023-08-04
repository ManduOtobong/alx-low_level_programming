#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int lent;

	if (b == NULL)
		return (0);

	for (lent = 0; b[lent];)
		lent++;

	for (lent -= 1; lent >= 0; lent--)
	{
		if (b[lent] != '0' && b[lent] != '1')
			return (0);

		num += (b[lent] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
