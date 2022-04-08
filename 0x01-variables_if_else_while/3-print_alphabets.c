#include <stdio.h>
/**
 * main - starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int order1 = 97;
	int order2 = 65;

	while (order1 < 123)
	{
		putchar(order1);
		order1++;
	}
		while (order2 < 91)
	{
		putchar(order2);
		order2++;
	}
	putchar('\n');
	return (0);
}


