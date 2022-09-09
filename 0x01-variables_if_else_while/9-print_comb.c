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
	int digit = 0;
	
	while (digit <= 9)
	{
		putchar(digit + 48);
		
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		
		++digit;
	}
	putchar('\n');
I
	return (0);
}
