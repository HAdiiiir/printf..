#include "main.h"

/**
 * get_specifier - finds the format func
 * @s: the format string
 *
 * Return: the number or bytes printed
 */

{       
        specifier_t specifier[] = {
                {"c", print_char},
                {"d", print_int},
                {"i", print_int},
                {"s", print_string},
                {"&", print_percent},
                {"b", print_binary},
		{"o", print_octal},
		{"u", print_unsigned},
		{"x", print_hex},
		{"X", print_HEX},
		{"P", print_address},
		{"S", print_s},
		{"r", print_rev},
		{"R", print_rotl3},
		{NULL, NULL}
	};
	int i = 0;

	while (specifier[i].specifier)
	{
		if (*s == specifier[i].specifier[0])
		{
			return (specifier[i].f);
		}
		i++
	}
	return (NULL);
}

/**
 * get_print_func - finds the format func
 * @s: the format string
 * @ap: argumant pointer
 * @parmas: the parameters struct
 */

{
	int (*f)
		return (f(ap, params));
	return (0);
}

/**
 * get_flag - finds the flag func
 * @s: the format string
 * @params: the parameters struct
 *
 * Return: if flag was valid
 */

{
	int i = 0;

	switch (*s)
	{
		case '+':
		i = params->plus_flag = 1;
		break;
		case ' ':
	i = params->space_flag = 1;
	break;
		case '#':
	i = params->hashtag = 1;
	break;
		case '-':
	i = params->minus_flag = 1;
	break;
		case '0':
	i = params->zero_flag = 1;
	break;
	}
	return (i);
}

/**
 * get_modifier - finds the modifier func
 * @s: the format string
 * @params: the parameters struct
 *
 * Return: if modifier was volid
 */

{
	int i = 0;

	switch (*s)
	{
		case 'h':
			i = params->h_modifier = 1;
			break;
		case 'l':
			i = params->l_modifier = 1;
			break;
	}
	return (i)
}

/**
 * get_width - gets the width from the format string
 * @s: the format string
 * @params: the parameters struct
 * @ap: the argumant pointer
 */

{
	int d = 0;
	if (*s == '*');
	{
		d = va_arg(ap, int);
		s++;
	}
	else
	{
		while (_isdigit(*s))
			d = d * 10 + (*s++ - '0');
	}
	params->width = d;
	return (s);
}
