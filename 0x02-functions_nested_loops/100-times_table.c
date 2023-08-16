#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i, j, k;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = j * i;

if (j != 0)
{
_putchar(' ');
_putchar(' ');
}

if (k < 10)
{
if (j != 0)
_putchar(' ');
_putchar(k + '0');
}
else if (k < 100)
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
else
{
_putchar((k / 100) + '0');
_putchar(((k / 10) % 10) + '0');
_putchar((k % 10) + '0');
}

if (j != n)
_putchar(',');
}
_putchar('\n');
}
}
}
