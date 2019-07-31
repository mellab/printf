#include <stdio.h>
#include "holberton.h"
#include <stdarg.h>
/**
 * _printf - funtion to print according to format c, s, i, f, d
 * @format: input format to print
 * Return: integer to check what is
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int b = 0, c = 0, d = 0, cuenf = 0, len = 0, e = 0;
	formatico ops[] = {
		{"c", printch}, {"s", prints}, {"i", printdi},
		{"d", printdi}, {"%", printper}, {"b", printbi},
		{"r", printrev}, {"R", printrot}
	};

	va_start(valist, format);
	if (format == NULL)
		return (-1);
	while (format != NULL && format[b] != 0)
	{
		c = 0;
		if (format[b] == '%')
		{
			for (d = 0; d < 8; d++)
			{
				if (format[b + 1] == 0)
					return (-1);
				if (format[b + 1] == *(ops[d].forma))
				{
					cuenf = cuenf + ops[d].f(valist);
					c = 2;
					e = e + 2;
					b = b + 1;
					break;
				}
			}
		}
		if (c == 0)
			_putchar(format[b]);
		b = b + 1;
	}
	len = b + cuenf - e;
	va_end(valist);
	return (len);
}
