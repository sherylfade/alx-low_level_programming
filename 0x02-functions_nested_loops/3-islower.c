#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character
 * @c: character to be checked
 * Return: 1 if c is lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && <= 'z')
		return (1);
	else
		return (0);
}
