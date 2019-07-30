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
	int b = 0, c = 0, d = 0, cuenf = 0, len = 0, e = 0;
	formatico ops[] = {
		{"c", printch}, {"s", prints}, {"i", printdi},
		{"d", printdi}, {"%", printper}
	};

	va_start(valist, format);
	if (format == NULL)
	{
		_puts("(null)");
		return (-1);
	}
	while (format != NULL && format[b] != 0)
	{
		for (; d < 5; d++)
		{
			c = 0;
			if (format[b] == '%')
			{
				if (format[b + 1] == 0)
					return (-1);
				if (format[b + 1] == *(ops[d].forma))
				{
					cuenf = cuenf + ops[d].f(valist);
					c = 2;
					d = 5;
					e = e + 2;
					b = b + 1;
				}
			}
		}
		if (c == 0)
			_putchar(format[b]);
		d = 0;
		b = b + 1;
	}
	len = b + cuenf - e;
	va_end(valist);
	return (len);
}
