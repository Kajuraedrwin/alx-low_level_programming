#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
int i = 0;
char alphabet[27] = "abcdefghijklmnopqrstuvwxyz\n";
while (i < 27)
{
putchar(alphabet[i]);
i++;
}
return (0);
}
