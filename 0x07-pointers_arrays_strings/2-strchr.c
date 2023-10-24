#include "main.h"
/**
 * *_strchr - fcn that located a char in string
 * @s: input
 * @c: input
 * Return: pointer to char
 */
char *_strchr(char *s, char c)
{
int i = 0;

int j;

while (s[i] != 0)
i++;
for (j = 0; j < i; j++)
{
if (s[j] == c)
{
return (&s[j]);
}
} return (NULL);
}
