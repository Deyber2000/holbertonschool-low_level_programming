#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - copies a string
 * @src: owner of the string to copie
 * @dest: The variable where we are gonna store the string from dest
 * Return: The string copied in src
 **/

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	int i;

	while (src[len] != '\0')
	{
		len++;
	}
	len++;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
