#include "main.h"
/**
 * print_alphabet - Prints a-z
 *
 * Description: A C progrma that prints using _putchar
 * Return: Program should return 0
 */

void print_alphabet(void)
{
	char f;

	for (f = 'a'; f <= 'z'; ++f)
	{
		_putchar(f);
	}
	_putchar('\n');

	return (void);
}
