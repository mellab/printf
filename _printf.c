#include <stdio.h>
#include "holberton.h"
#include <stdarg.h>
/**
 * _printf - funtion to print according to format c,i,f,d
 * @format: input format to print
 * Return: integer to check what is
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int b = 0, c = 0, d = 0, cuenf = 0, len = 0;
	formatico ops[] = {
		{"c", printch},
		{"s", prints},
		{"i", printdi},
		{"d", printdi},
		{"%", printper}
	};

	va_start(valist, format);
	while (format != NULL && format[b] != 0)
	{
		for (; d < 5; d++)
		{
			c = 0;
			if (format[b] == '%')
			{
				/*printf("\nentre en la posición igual a: %c \n", format[b]);*/
				if (format[b + 1] == *(ops[d].forma))
				{
					/*printf("\nentre a buscar: %c \n", format[b + 1]);*/
					cuenf = cuenf + ops[d].f(valist);
					c = 1;
					d = 5;
					b = b + 1;
				}
			}
		}
		if (c == 0)
			_putchar(format[b]);
		d = 0;
		b = b + 1;
	}
	len = b + cuenf;
	va_end(valist);
	return (len);
}
