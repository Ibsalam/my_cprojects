#include <stdio.h>
/**
 * The programme tha calculates total and average scores
 */

int sum(int a, int b);

int main()
{
	int total = sum(8, 12);
	int average = total / 2;
	printf("The total score is: %d\nThe average score is: %d\n", total, average);
	return 0;
}

int sum(int a, int b)
{
	int c = a + b;
	return c;
}
