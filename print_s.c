#include "main.h"
/**
 * printf_string - print a string.
 * @val: argumant.
 * Return: the length of the string.
 */

int printf_string(va_list val)
{
	char *str;
	int i;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = strlen(str);
		for (i = 0; i < length; i++)
			putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			putchar(str[i]);
		return (length);
	}
}