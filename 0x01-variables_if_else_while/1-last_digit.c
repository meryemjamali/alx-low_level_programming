#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("the last digit %i is %i is greater than 5\n", digit, n);
	else if (digit == 0)
		printf("the last digit %i is %i is 0\n", digit, n);
	else if (digit < 6 && digit != 0)
		printf("the last digit %i is %i is less than 6 and not 0\n", digit, n);

	return (0);
}
