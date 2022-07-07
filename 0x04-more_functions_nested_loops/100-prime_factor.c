#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, fp;

	n = 612852475143;
	for (fp = 2; fp <= n; fp++)
	{
		f (n % fp == 0)
		{
		i	n /= fp;
			fp--;
		}
	}
	prntf("%l\n", fp);
return (0);
}
