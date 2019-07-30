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
		_puts("(null)");
		return (6);
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
	int prin = 0;

	prin = va_arg(valist, int);
	_putchar(prin);
	return (1);
}
/**
 * printdi - Function to print all the numbers integer or doubles.
 * @valist: pointer to separator to print
 * Return: do not return
 */
int printdi(va_list valist)
{
	long int numtc = 0;
	int cuen = 0;
	long int b = 0;
	long int c = 1;

	numtc = va_arg(valist, int);
	if (numtc < 0)
	{
		_putchar('-');
		numtc = numtc * (-1);
		cuen = 1;
	}
	while (c <= numtc)
	{
		c = c * 10;
	}
	c = c / 10;
	b = numtc;
	while (c > 0)
	{
		b = numtc / c;
		_putchar((b % 10) + '0');
		c = c / 10;
		cuen = cuen + 1;
	}
	if (numtc == 0)
	{
		_putchar(0 + 48);
		cuen = cuen + 1;
	}
	return (cuen);
}

/**
 * printper - Function to print arguments float
 * @valist: pointer to separator to print
 * Return: do not return
 */
int printper(va_list valist)
{
	(void) valist;
	return (_putchar('%'));
}
/**
 * printbi - Function to print dec to binary
 * @valist: pointer to separator to print
 * Return: return length
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
