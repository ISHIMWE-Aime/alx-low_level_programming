#include <stdio.h>

/**
 * main - print char in base 16
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char n;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (n = 'a'; n < 'g'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
