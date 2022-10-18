#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - Write a function that produces output according to a format.
 * @format: array containing conversion specifiers:
 * Return:  the number of characters printed
 */

int _printf(const char *format, ...)
{
int i = 0, j, k, count2 = 0, count1 = 0, count = 0;
va_list args;
char *p = NULL;
char c;

va_start(args, format);
for (i = 0; format[i]; i++, count++)
;
for (i = 0; i < count; i++)
{
if (format[i] == '%')
{
count1++;
if (format[i + 1] == 'c')
{
count2++;
c = va_arg(args, int);
putchar(c);
}
else if (format[i + 1] == 's')
{
p = va_arg(args, char *);
for (k = 0; p[k]; k++)
;
count2 += k;
for (j = 0; j < k; j++)
{
putchar(p[j]);
}
}
}
if (format[i] == '%' && (format[i+1] == 's' || format[i+1] == 'c' || format[i+1] == 'd' || format[i+1] == 'p'))
continue;
if (format[i-1] == '%' && (format[i] == 's' || format[i] == 'c' || format[i] == 'd' || format[i] == 'p' || format[i] == '%'))
continue;
putchar(format[i]);
va_end(args);
}
putchat(10);
return (count - count1 * 2 + count2);
}
