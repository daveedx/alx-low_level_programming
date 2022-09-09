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
		putchar(c);
	for (c = 'A'; c <= 'Z'; ++c)
		putchar(c);
	putchar("\n");

	return (0);
}
