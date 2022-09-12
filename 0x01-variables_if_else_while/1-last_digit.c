#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main function
 * Description: found greater than 5, if is less than 6, or is 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, max;

	srand(time(0));
	num = rand() - RAND_MAX / 2;
	max = num % 10;
	if (max > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", num, max);
	}
	else if (max < 6 && max != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", num, max);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", num, max);
	}
	return (0);
}
