#include <stdio.h>

void putchar_digit(char digit)
{
	putchar(digit + '0');
}

void print_combinations(void)
{
int i, j, k;

for (i = 0; i <= 7; i++)
{
for (j = i + 1; j <= 8; j++)
{
for (k = j + 1; k <= 9; k++)
{
putchar_digit(i);
putchar_digit(j);
putchar_digit(k);

if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
}

int main(void)
{
print_combinations();
return (0);
}
