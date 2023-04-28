#include "main.h"

/**
 * print_numbers - prints integers
 * @n: the number to be printed
 *
 * Return: the number of characters printed
 */
int print_numbers(int n)
{
	int mod = 1;
	int dup = 0;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count += 1;
		n = -n;
	}
	dup = n;
	while (dup > 9)
	{
		dup = dup / 10;
		mod *= 10;
	}
	while (mod != 0)
	{
		_putchar('0' + (n / mod));
		n = n % mod;
		mod /= 10;
		count++;
	}
	return (count);
}
