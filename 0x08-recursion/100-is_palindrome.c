#include "main.h"
#include <string.h>

int check_palindrome(char *s, int l, int i);

/**
* check_palindrome - check if string is palindrome
* @s: string
* @l: length of the string
* @i: string index
*
* Return: palindrome
*/
int check_palindrome(char *s, int l, int i)
{
	if (i > (l / 2))
		return (1);
	else if (s[i] != s[l - i - 1])
		return (0);
	else
		return (check_palindrome(s, l, i + 1));
}

/**
* is_palindrome - check if string is palindrome
* @s: string
*
* Return: palindrome
*/
int is_palindrome(char *s)

{
	int len = strlen(s);
	int pal;

	pal = check_palindrome(s, len, 0);
	return (pal);
}
