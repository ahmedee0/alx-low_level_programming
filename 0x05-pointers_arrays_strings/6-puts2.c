#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: char to check
 *
 * Return: 0 is success
 */

void puts2(char *str)
{
	int i = 0, a;
	
	while (str[i] != '\0')
	{
		i++;
	}

	for (a = 0; a <= i; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
