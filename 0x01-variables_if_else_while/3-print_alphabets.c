#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
int i = 0;
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
char Alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
while (i < 26)
{
putchar(alphabet[i]);
i++;
}
i = 0;
while (i < 26)
{
putchar(Alphabet[i]);
i++;
}
putchar('\n');
return (0);
}
