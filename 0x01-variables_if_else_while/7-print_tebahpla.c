#include <stdio.h>
/**
 * main - starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int order = 122;

	while (order >= 97)
	{
		putchar(order);
		order--;
	}
	putchar('\n');
	return (0);
}

