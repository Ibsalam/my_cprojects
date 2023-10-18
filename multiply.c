#include <stdio.h>

/**
 * A programme that multiply two intakes
 */

int total(int a, int b);  //prototype

int main()
{
	int n, i;

	printf("Enter first number: ");
	scanf("%d", &n);
	printf("Enter second number: ");
	scanf("%d", &i);
	int answer = total(n, i);
	
	//Display the result
	printf("Your answer is: %d\n", answer);
	return 0;
}

	int total(int a, int b)
{
	int c = a * b;
	return c;
}
