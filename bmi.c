#include <stdio.h>

int main() {
	float weight, height, bmi;

	printf("Enter your height in meters: ");
	scanf("%f", &height);
	printf("Enter your weight in kilograms: ");
	scanf("%f", &weight);
	
	bmi = weight / (height * height);
	printf("Your Body Mass Index is: %.2f\n", bmi);

	if (bmi < 20) {
		printf("Underweight.\n");
	} else if (bmi >= 20 && bmi < 25) {
		printf("Normal.\n");
	} else if (bmi >= 25 && bmi < 30) {
		printf("Overweight.\n");
	} else {
		printf("Obese.\n");
	}
	return 0;
}

