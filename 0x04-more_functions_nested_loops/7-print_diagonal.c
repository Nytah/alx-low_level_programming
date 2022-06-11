#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - print line.
 * @n: line to print
 */
void print_diagonal(int n)
{
if (n < 1)
{
printf("\n");
return;
}
int i;
for (i = 0; i < n; i++)
{
printf("%*s%s", i, "", "\\");
printf("\n");
}
}

