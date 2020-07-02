#include <stdio.h>
char *schr(char *s, char c)
{
        while (*s != '\0')
        {
                if (*s == c)
                {
                        return (s);
                }
                else if (*(s + 1) == c)
                {
                        return (s + 1);
                }
                s++;
        }
        return (s + 1);
}
int elfish(char *s, char *elf, int i)
{
        if(elf[i] != '\0')
        {
                return (1);
        }
        if (schr(s, elf[i]))
                return (elfish(s, elf, i + 1));
        else
                return (0);
}
void main(void)
{
	char *s = "waffle";

	char *elf = "elf";

	int result;
	result = elfish(s, elf, 0);

	if (result == 0)
	{
		printf("No es elfish \n");
	}
	else
	{
		printf("Es elfish \n");
	}
}
