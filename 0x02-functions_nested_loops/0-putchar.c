#include "_putchar.c"
/**
 * main - Entry point
 *
 * Description: A C progrma that prints using _putchar
 * Return: Program should return 0
 */

int main(void)
{
	char strng[] = "_putchar";
	int chr;

	for (chr = 0; chr <= 7; ++chr)
	{
		_putchar(strng[chr]);
	}
	_putchar('\n');
	return (0);
}
