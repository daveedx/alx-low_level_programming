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
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'e' || c != 'q')
			putchar(c);
	}

	return (0);
}
