#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int d, p;

	for (d = '0'; d < '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
		{
			if(p != d)
			{
			putchar(d);
			putchar(p);
			if (d == '8' && p == '9')
			continue;
			putchar(',');
			putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
