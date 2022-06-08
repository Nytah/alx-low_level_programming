#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
int row, column, product, tens, ones;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = row *column;
tens = product / 10;
_putchar(tens + '0');
_putchar(ones + '0');
}
}
_putchar('\n');
}
