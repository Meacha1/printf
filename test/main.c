#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int number;

	number = 195054687;

	a = _printf("%i, %d\n", number, number);
	printf("%d\n", a);
	a = _printf("% ");


