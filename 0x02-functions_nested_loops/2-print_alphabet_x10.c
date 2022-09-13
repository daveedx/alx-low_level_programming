#include "main.h"
/**
 * print_alphabet_x10 - Prints a-z 10 times
 *
 * Description: A C progrma that prints using _putchar
 * Return: Program should return 0
 */

void print_alphabet_x10(void)
{
	char f;
	int x;

	for (x = 0; x <= 10; ++x)
	{
		for (f = 'a'; f <= 'z'; ++f)
		{
			_putchar(f);
		}
	}

}
