#include "main.h"

/**
 * factorial - Calculate the factorial of a number
 * @n: the nummber to calculate the factorial
 *
 * Return: integer value
 */

int factorial(int n)
{
	if (n < 0)
		returm (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
