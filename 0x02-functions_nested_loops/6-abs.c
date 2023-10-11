#include "main.h"


/**
 * _abs - Compute the absolute value of an integer.
 * @c: The integer for which the absolute value is to be calculated.
 * Return: Absolute value of n.
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;


		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
