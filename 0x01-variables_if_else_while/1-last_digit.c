#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Description: Gets the last number of a random digit and Checks it
 *
 * Return: Returns Zero
 */
int main(void)
{
	int n; lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d\n"
		"\bis %d and is greater than 5", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d\n"
		"\bis %d and is less than 6 and not 0", n, lastDigit);
	}
	return (0);
}
