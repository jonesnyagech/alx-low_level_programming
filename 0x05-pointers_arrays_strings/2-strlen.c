#include "main.h"

/**
 * * _strlen - check the lenth of a string
 *
 * @s: param
 *
 * Return: always 0
*/

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}
