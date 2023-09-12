#include "main.h"

/**
 *print_alphabet - a function that prints the alphabet, in lowercase
 *
 *Return: always zero
 */
void print_alphabet(void)
{
	int i = 'a';

	do {
		_putchar(i);
		i++;
	} while (i <= 'z');
	_putchar('\n');
}
