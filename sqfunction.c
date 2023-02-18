#include <stdio.h>

void numberSquare(int number)
{
	int calculateSquare = number * number;	
	printf("The square of %d is %d", number, calculateSquare);
}
int main(void)
{
	printf("Enter the number: ");
	scanf("%d", &number);
	numberSquare();
	return (0);
}
