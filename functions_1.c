#include <stdio.h>
#include "holberton.h"
#include <stdarg.h>
/**
 * prints - Function to print strings.
 * @valist: data type for iterating the list of arguments
 * Return: string length like an int
 */
int prints(va_list valist)
{
	char *car = va_arg(valist, char *);

	if (car == NULL)
	{
		_puts("(null)");
		return (6);
	}
	return (_puts(car));
}
/**
 * printch - Function to print a character.
 * @valist: data type for iterating the list of arguments
 * Return: char length like an int
*/
int printch(va_list valist)
{
	int prin = 0;

	prin = va_arg(valist, int);
	_putchar(prin);
	return (1);
}
/**
 * printdi - Function to print all the numbers integer or doubles.
 * @valist: data type for iterating the list of arguments
 * Return: digits numbers of an integer or a double
 */
int printdi(va_list valist)
{
	long int numtpr = 0;
	int len = 0;
	long int b = 0;
	long int c = 1;

	numtpr = va_arg(valist, int);
	if (numtpr < 0)
	{
		_putchar('-');
		numtpr = numtpr * (-1);
		len = 1;
	}
	while (c <= numtpr)
	{
		c = c * 10;
	}
	c = c / 10;
	b = numtpr;
	while (c > 0)
	{
		b = numtpr / c;
		_putchar((b % 10) + '0');
		c = c / 10;
		len = len + 1;
	}
	if (numtpr == 0)
	{
		_putchar(0 + 48);
		len = len + 1;
	}
	return (len);
}

/**
 * printper - Function to print arguments float
 * @valist: data type for iterating the list of arguments
 * Return: length of the character corresponding percentage
 */
int printper(va_list valist)
{
	(void) valist;
	return (_putchar('%'));
}
/**
 * printbi - Function to print dec to binary
 * @valist: data type for iterating the list of arguments
 * Return: length of the binary
 */
int printbi(va_list valist)
{
	unsigned int numtc = 0;
	int arrnum[64];
	int count = 0;
	int vuelt = 0;

	numtc = va_arg(valist, int);
	if (numtc < 1)
	{
		_putchar(48);
		return (1);
	}
	while (numtc > 0)
	{
		arrnum[count] = numtc % 2;
		numtc = numtc / 2;
		count++;
	}
	vuelt = count - 1;
	while (vuelt >= 0)
	{
		_putchar(arrnum[vuelt] + '0');
		vuelt = vuelt - 1;
	}
	return (count);
}
