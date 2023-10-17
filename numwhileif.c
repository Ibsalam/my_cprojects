#include <stdio.h>

/**
 * Prints even numbers up to 20 with while loop and if
 */

int main () {

int number = 1;

while (number <= 20)
{
	if (number % 2 == 0)
	{
		printf("%i\n", number);
	}
		number++;
	}
	return 0;
}
