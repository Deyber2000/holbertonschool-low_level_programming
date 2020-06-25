#include "holberton.h"
/**
 * *_strncat - a function that concatenates two strings.
 * @dest: destination
 * @src: Source
 * @n: at most numeber
 * Return: Dest
 **/

char *_strncat(char *dest, char *src, int n)
{
	int lenD; /**Length of dest**/

	int i;

	for (lenD = 0; dest[lenD] != '\0'; lenD++)
	{
		; /**Calculates the length of dest**/
	}



	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[lenD + i] = src[i];

	}
	dest[lenD + i] = '\0';




		return (dest);
}
