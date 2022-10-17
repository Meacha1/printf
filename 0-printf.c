#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - Write a function that produces output according to a format.
 * @format: array containing conversion specifiers:
 * Return: 0 for success.
 */

int _printf(const char *format, ...)
{
int i = 0, j, k, count = 0;
va_list args;

char *p = NULL;
va_start(args, format);

for (i = 0; format[i]; i++, count++)
;
for (i = 0; i < count; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == 'c')
{
p = va_arg(args, char *);
_putchar(p);
}
else if (format[i + 1] == 's')
{
p = va_arg(args, char *);
for (k = 0; p[k]; k++)
;
for (j = 0; j < k; j++)
{
_putchar(p[j]);
}
}
}
if (format[i] == '%')
continue;
if (format[i - 1] == '%')
continue;
_putchar(format[i]);

va_end(args);
return (0);
}
