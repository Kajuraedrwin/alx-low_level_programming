#include <stdio.h>
/**
 *_strncat - function that concatenates two strings
 *@dest: string from which we are copying to
 *@src: source string from which we are copying from
 *@n: number of characters to copy from dest
 *Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int init = 0, dest_len = 0;

	while (dest[init++])
		dest_len++;
	for (init = 0; src[init] && index < n; init++)
		dest[dest_len++] = src[init];
	return (dest);
}
