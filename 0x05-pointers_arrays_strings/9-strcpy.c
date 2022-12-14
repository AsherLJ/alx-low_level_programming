#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: detination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = *(src + len);
	return (dest);
}
