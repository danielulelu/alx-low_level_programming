#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number to be checked
 * Return: 1 for positive numner, -1 for negative or zero for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(43);
	return (-1);
	}
	else
	{
	_putchar(43);
	return (0);
	}
}
