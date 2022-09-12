#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Main function entry point
 * Return: Always 0
 * Description: print out a random elem
 */

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* get last digit by getting remainder when divided by 10 */
	digit = n % 10;

	printf("Last digit of %d is %d %s\n",
		   n, digit, digit == 0 ? "and is 0" : digit < 6 ?
		   "and is less than 6 and not 0" : "and is greater than 5");
	return (0);
}
