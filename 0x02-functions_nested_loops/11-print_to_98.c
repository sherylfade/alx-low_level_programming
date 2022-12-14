#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 *@n: number to start count
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n >= 100)
				_putchar((n / 100) + '0');
			_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');

			if (n == 98)
				break;
			_putchar(',');
			_putchar(' ');
			n--;
		}
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n <= 98)
		{
			if (n < 0)
				_putchar('-');

			if (abs(n) >= 10)
				_putchar((abs(n) / 10) + '0');
			_putchar((abs(n) % 10) + '0');

			if (n == 98)
				break;
			_putchar(',');
			_putchar(' ');
			n++;
		}
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	_putchar('\n');
}
