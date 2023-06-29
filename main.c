#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
*main - a function
*Return: Always 0 in main function
*/
int main(void)
{
int a;
int b;
unsigned int c;
void *d;
a = _printf("Let's try to printf a simple sentence.\n");
b = printf("Let's try to printf a simple sentence.\n");
c = (unsigned int)INT_MAX + 1024;
d = (void *)0x7ffe637541f0;
_printf("Length:[%d, %i]\n", a, a);
printf("Length:[%d, %i]\n", b, b);
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);
_printf("Unsigned:[%u]\n", c);
printf("Unsigned:[%u]\n", c);
_printf("Unsigned octal:[%o]\n", c);
printf("Unsigned octal:[%o]\n", c);
_printf("Unsigned hexadecimal:[%x, %X]\n", c, c);
printf("Unsigned hexadecimal:[%x, %X]\n", c, c);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
_printf("Address:[%p]\n", d);
printf("Address:[%p]\n", d);
a = _printf("Percent:[%%]\n");
b = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", a);
printf("Len:[%d]\n", b);
_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");
return (0);
}
