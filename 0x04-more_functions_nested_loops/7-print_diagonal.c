#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - print line.
 * @n: line to print
 */
void print_diagonal(int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%*s%s\n", i, " ", "\\");
}
}

