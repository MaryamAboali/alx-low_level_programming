#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all aplhabet lettrs except q and e
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
