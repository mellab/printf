# printf
<img
  src="https://secure.meetupstatic.com/photos/event/b/c/5/6/600_475548214.jpeg"
  align="center"
/>

## Description

The _printf function prints a formatted string to the standard output as in the printf function of the C standard library. It is a handy way to produce precisely-formatted output from numerical or textual arguments.

### Usage

#### Step 0: clone the repository

```sh
git clone https://github.com/mellab/printf.git
```

#### Step 1: Create a main.c file and add the following code:

```sh
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

#### Step 2: compile all the files

```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```

### Examples

* ```_printf("Hello, World!")``` *prints "Hello, World!"*

### Authors
* **Alejandro Mogollon** - [mellab](https://github.com/mellab)
* **Paulo Morillo** - [PauloMorillo](https://github.com/PauloMorillo)
