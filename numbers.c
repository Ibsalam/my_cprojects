#include <stdio.h>

/**
 * Print even numbers using for loop without if
 */
int main ()
{
	int number;

	for (number = 0; number <= 20; number = number + 2)
{
	printf("%i\n", number);
}
	return 0;
}
