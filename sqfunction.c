#include <stdio.h>

void numberAdd(int number1, int number2)
{
	int calculateAdd = number1 + number2;
	printf("THe sum of %d and %d is %d\n", number1, number2, calculateAdd);
}

int main(void)
{
	numberAdd(9, 20);

	return(0);
}
