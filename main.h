#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);

typedef struct checker
{
	char *type;
	void (*f)();
} checker;
#endif
