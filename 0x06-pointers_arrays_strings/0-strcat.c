#include "main.h"

/**
 * _strcat -  concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int lengthD, lengthS;

	lengthD = 0;
	lengthS = 0;

	while (*(dest + lengthD) != '\0')
		lengthD++;
	while (*(src + lengthS) != '\0' && lengthD < 97)
	{
		*(dest + lengthD) = *(src + lengthS);
		lengthD++;
		lengthS++;

	}
	*(dest + lengthD) = '\0';
	return (dest);
}

