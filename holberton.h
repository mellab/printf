#ifndef _holberton_h_
#define _holberton_h_
#include <stdarg.h>
/**
 * struct formatarg - Struct of elements
 * @forma: data type format
 * @f: pointer to function
 *
 */

typedef struct formatarg
{
	char *forma;
	void (*f)(va_list);

} formatico;

int _printf(const char *format, ...);
void printch(va_list valist);
void prints(va_list valist);
void printdi(va_list valist);
int _putchar(char c);
void _puts(char *str);

#endif /* _holberton_h_ */
