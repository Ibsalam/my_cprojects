#include <stdio.h>

/**
 * Print even numebrs up to 20 using while loop
 * without if
 */

	int main ()
{
	int number = 0;

	while (number <= 20)
{
	printf("%i\n", number);
	number = number + 2;
}
	return 0;
}
