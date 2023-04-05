#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * is_palindrome - Returns if a string is palindrome
  * @str: the string value to be checked
  *
  * Return: integer value
  */

int is_palindrome(char *str)
{
	int len = strlen(str);

	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - i - 1])
		{
			return (0);
		}
	}
	return (1);
}
