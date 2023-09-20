#include "main.h"

/**
 * leet - encodes a string to  1337
 *
 * @s: param to be encoded
 *
 * Return: s
*/

char *leet(char *s)
{
	int a, b;

	char nose[] = "aeotl";
	char nose1[] = "AEOTL";
	char res[] = "43071";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; nose[b] !=  '\0' && nose1[b] != '\0'; b++)
		{
			if (s[a] == nose[b] || s[a] == nose1[b])
			{
				s[a] = res[b];
			}
		}
	}
	return (s);
}
