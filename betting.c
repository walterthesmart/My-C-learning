#include <stdio.h>

int main(void)
{
	int age;

	printf("what is your age?");
	scanf("%d", &age);

	if (age > 18)
	{
		printf("YOu are good to go and bet");
	}
	else if (age > 0 && age  < 18)
	{
		printf("Sorry, you cannot bet");
	}
	else if (age < 0)
	{
		printf("You are not born yet");
	}
	else
	{
		printf("Sorry we know nothingn about you");
	}
	return (0);
}

