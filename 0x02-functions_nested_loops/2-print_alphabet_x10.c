#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet  in lowercase.
 *
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	char ch;
	char i;

	for (i = 48; i <= 58; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
