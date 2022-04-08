#include <stdio.h>
/**
 * main - starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int order = 48;
	int order2 = 97;

	while (order <= 57)
	{
		putchar(order);
		order++;
	}
	while (order2 <= 102)
	{
		putchar(order2);
		order2++;
	}
	putchar('\n');
	return (0);
}

