#include <stdio.h>

/**
 * in main - Prints the alphabet.
 * list
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(letter[i]);
	}
	putchar('\n');
	return (0);
}

