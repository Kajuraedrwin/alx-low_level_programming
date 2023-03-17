#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
int i = 0;
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
while (i < 27)
{
putchar(alphabet[25 - i]);
i++;
}
putchar('\n');
return (0);
}
