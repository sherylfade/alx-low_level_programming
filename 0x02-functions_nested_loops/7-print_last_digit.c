#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: the number checked
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int a = n % 10;

	if (n < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
