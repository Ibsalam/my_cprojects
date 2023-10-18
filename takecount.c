#include <stdio.h>

/**
 * This programme takes any number of values
 * It requests values to be entered for each of the numbers
 * It then generate total score and average score
 */

double sum(int a, int b);

int main() 
{
	int n, i;
	double total = 0.0, number;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	// input numbers and loop
	for (i = 0; i < n; i + 1)
{
	printf("Enter number %d: ", i + 1);
	scanf("%lf", &number);
	total += number;
}

// calculate the total using the sum function
	double average = total / n; //calculate the average directly as double
	printf("Total score is %.2lf\n", total);
	printf("Average score is %.2lf\n", average);
	return 0;
}

double sum(int a, int b)
{
	double c = a + b;
	return c;
}
