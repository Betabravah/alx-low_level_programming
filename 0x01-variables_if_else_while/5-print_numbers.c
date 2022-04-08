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
		order++;
	}
	putchar('\n');
	return (0);
}
