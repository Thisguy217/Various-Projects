#include<stdio.h>

int main() {
	int numOne;
	int numTwo;
	int numThree;

	printf("Please enter the first number: ");
	scanf("%i", &numOne);
	printf("Please enter the second number: ");
	scanf("%i", &numTwo);
	printf("Please enter the third number: ");
	scanf("%i", &numThree);

	printf("%i + %i + %i = %i\n", numOne, numTwo, numThree, numOne + numTwo + numThree);
	return 0;
}
