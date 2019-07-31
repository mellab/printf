#include "holberton.h"
#include <stdlib.h>
/**
 * print_rev - print the string in reverse
 * @s: input pointer with string
 * Return: length of string
 *
 */

int print_rev(char *s)
{
	int a1 = 0;
	int a2 = 0;

	while (s[a1] != '\0')
	{
		/*_putchar(s[a1]);*/
		a1 = a1 + 1;
	}
	a2 = a1;
	while (a1 > 0)
	{
		a1 = a1 - 1;
		_putchar(s[a1]);
	}
	return (a2);
}

/**
 * printrev - call printrev
 * @valist: input for call arguments with va_arg
 * Return: length of string
 *
 */
int printrev(va_list valist)
{
	char *car = va_arg(valist, char *);

	if (car == NULL)
	{
		_puts("(null)");
		return (6);
	}
	return (print_rev(car));
}
