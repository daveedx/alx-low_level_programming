#include "main.h"
#include <ctype.h>
/**
 * _islower - Checks if a char is lower
 * @c: checks input of function
 *
 * Description: A C progrma that prints using _putchar
 * Return: Program should return 0
 */

int _islower(int c)
{
	if (islower(c) == 0)
		return (0);
	return (1);
}
