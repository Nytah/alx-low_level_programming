#include "main.h"
#include <stdio.h>
/**
 * _isupper - check if a variable is uppercase.
 * @c: passed in alphabet
 * Return: Either 1 or 0.
 */
int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
return (0);
}

