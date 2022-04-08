#include <stdio.h>
/**
 * main - starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int order = 97;

	while (order < 123)
	{
		putchar(order);
		order++;
	}
	putchar('\n');
	return (0);
}

