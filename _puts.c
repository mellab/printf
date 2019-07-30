#include "holberton.h"

/**
 * _puts - print the string
 * @str: input pointer
 *
 * Return: length of the string
 */

int _puts(char *str)
{
	int a1 = 0;

	while (str[a1] != '\0')
	{
		_putchar(str[a1]);
		a1 = a1 + 1;
	}
	return (a1);
}
