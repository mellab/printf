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
	int b = 0;
	int d = 0;
	formatico ops[] = {
		{"c", printch},
		{"s", prints},
		{"i", printdi},
		{"d", printdi}
	};

	va_start(valist, format);
	while (format != NULL && format[b] != 0)
	{
		while (d < 4)
		{
			if (format[b] == '%')
			{
				if (format[b + 1] == *(ops[d].forma))
				{
					ops[d].f(valist);
					d = 4;
				}
			}
			d = d + 1;
		}
		d = 0;
		b = b + 1;
	}
	_puts("\n");
	va_end(valist);
	return (0);
}
