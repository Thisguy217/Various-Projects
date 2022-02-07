#include<stdio.h>

int main() {
	int userAge;
	int DAYS_IN_YEAR = 365;
	int HOURS_IN_DAY = 24;
	int MINUTES_IN_HOUR = 60;

	printf("Enter your age in years: ");
	scanf("%i", &userAge);
	
	printf("After %i years you are:\n", userAge);
	printf("Days: %i\n", userAge * DAYS_IN_YEAR);
	printf("Hours: %i\n", userAge * DAYS_IN_YEAR * HOURS_IN_DAY);
	printf("Minutes: %i\n", userAge * DAYS_IN_YEAR * HOURS_IN_DAY * MINUTES_IN_HOUR);

	return 0;
}
