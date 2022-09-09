#include <stdio.h>

/**
* main - Entry Point
*
* Description: Prints the size of various Data types in C, Depending on the
*system in use
* Return: Always 0(Success)
*/

int main(void)
{
	printf("Size of a char: %d\n byte(s)"
	"Size of an int: %d\n byte(s)"
	"Size of a long int: %d\n byte(s)"
	"Size of a long long int: %d\n byte(s)"
	"Size of a float: %d\n byte(s)", sizeof(char),
	sizeof(int), sizeof(long int),
	sizeof(long long int),
	sizeof(float));
	return (0);
}
