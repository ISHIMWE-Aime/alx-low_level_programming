/*#include <main.h>*/
#include <stdio.h>
#include <stdarg.h>

/**
 * main - print the sum of args
 *
 * printf function used to print the sum
 *
 * @n: parameter to the function sum_the_all
 *
 * Return: Always 0 (Success)
 */
int sum_them_all(const unsigned int n, ...);

int main(void)
{
	int sum;

	sum = sum_them_all(2, 98, 1024);
	printf("The sum of args is %d\n", sum);
	sum = sum_them_all(4, 98, 1024, 402, -1024);
	printf("The sum of args is %d\n", sum);
	return (0);
}

/**
 * sum_them_all - variadic function.
 *
 * @n: parameter to the function sum_the_all
 *
 * Return: Always sum (Success);
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list args;

	va_start(args, n);
	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}

