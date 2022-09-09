#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Gets the last number of a random digit and Checks it
 *
 * Return: Returns Zero
 */
int main(void)
{
	int digit = 48;

	while (digit <= 102) /*102; decimal rep of f*/
	{
		putchar(digit);
		if (digit == 57)
			digit += 39;
		++digit;
	}
	putchar('\n');

	return (0);
}
