#include <stdio.h>
#include "holberton.h"
#include <stdarg.h>
/**
 * prints - Function to print strings.
 * @valist: pointer to separator to print
 * Return: do not return
 */
int prints(va_list valist)
{
	char *car = va_arg(valist, char *);

	if (car == NULL)
	{
		_puts("(nul)");
		return (-1);
	}
	return (_puts(car));
}
/**
 * printch - Function to print all the arguments with separator.
 * @valist: pointer to separator to print
 * Return: do not return
 */
int printch(va_list valist)
{
	_putchar((char)va_arg(valist, int));
	return (1);
}
/**
 * printdi - Function to print all the numbers integer or doubles.
 * @valist: pointer to separator to print
 * Return: do not return
 */
int printdi(va_list valist)
{
	printf("%d", va_arg(valist, int));
	return (1);
}

/**
 * printper - Function to print arguments float
 * @valist: pointer to separator to print
 * Return: do not return
 */
int printper(va_list valist)
{
	if (va_arg(valist, char *))
	{
		return (_putchar('%'));
	}
	else
	{
		return (_putchar('%'));
	}
	return (0);
}
