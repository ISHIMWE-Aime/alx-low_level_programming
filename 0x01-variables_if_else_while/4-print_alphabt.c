#include <stdio.h>

/**
 * main - prints the alphabets in lowercase amd omits q and e
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 'a';
while (i <= 'z')
{
if (i != 'e' && i != 'q')
{
	putchar(i);
}
i++;
}
putchar('\n');
return (0);
}
