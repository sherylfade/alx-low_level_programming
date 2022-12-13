#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: the number checked
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	lastDig = n % 10;

	while (n >= 10)
	{
		n = n / 10;
	}
	_putchar("lastDig");
	return ("lastDig");
}
