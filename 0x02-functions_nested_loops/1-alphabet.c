#include "main.h"
/**
 * main - Entry point
 *
 * Description: A C progrma that prints using _putchar
 * Return: Program should return 0
 */

void print_alphabet(void)
{
	char f = 'a';

	for (f; f <= 'z'; ++f)
	{
		_putchar(f);
	}
	_putchar('\n');

	return ();
}