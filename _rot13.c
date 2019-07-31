#include "holberton.h"
#include <stdlib.h>

/**
 * rot13 - encodes a string to ROT13
 * @s1: first input word to string to encode
 *
 *
 * Return: answer of encode
 */

char *rot13(char *s1)
{
	int a = 0, e = 0;
	int b = 0;
	char *p;
	char c[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char d[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s1[e] != '\0')
	{
		e = e + 1;
	}
	p = malloc(sizeof(char) * e);
	/*n = n / 8;*/
	while (s1[a] != '\0')
	{
		while (b < 53)
		{
			if (s1[a] == c[b])
			{
				p[a] = d[b];
				break;
			}
			b = b + 1;
		}
		b = 0;
		a = a + 1;
	}
	return (p);
}

/**
 * printrot - call printrev
 * @valist: input for call arguments with va_arg
 * Return: pointer with changed to rot13
 *
 */
int printrot(va_list valist)
{
	char *car = va_arg(valist, char *);
	char *dest;

	if (car == NULL)
	{
		_puts("(null)");
		return (6);
	}
	dest = rot13(car);
	return (_puts(dest));
}
