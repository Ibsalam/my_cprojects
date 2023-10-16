#include <stdio.h>

/**
 * Code that prints even numbers using for loop and if
 */
int main ()
{
	int number;

	for (number = 1; number <= 20; number++)
{
	if (number % 2 == 0)
{
	printf("%i\n", number);
}
}
	return 0;
}
