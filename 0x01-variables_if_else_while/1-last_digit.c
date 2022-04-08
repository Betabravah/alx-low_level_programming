#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
    if (ld > 5)
		printf("Last digit of %d is %s and is greater than 5", n, ld)
	else if (ld == 0)
		printf("Last digit of %d is %s and is 0", n, ld)
	else 
		printf("Last digit of %d is %s and is greater than 6 and not 0", n, ld)
	return (0);
}