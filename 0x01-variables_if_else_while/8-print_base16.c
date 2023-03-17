#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
int i;
char hex_digits[16] = "0123456789abcdef";
for (i = 0; i < 16; i++)
{
putchar(hex_digits[i]);
}
putchar('\n');
return (0);
}
