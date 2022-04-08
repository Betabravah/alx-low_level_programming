#include <stdio.h>
/**
 * main - starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int order = '0';

	while (order <= '9')
	{
		putchar(order);
		if (order != 9)
		{
			putchar(',');
			putchar(' ');
		}
		order++;
	}
	putchar('\n');
	return (0);
}
