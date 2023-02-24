#include <stdio.h>
/**Function declaration.
 * a function without the body
 */

int numberAdd(int number1, int number2);

int main(void)
{
	int result = numberAdd(9, 20);
	printf("The result is %d\n", result);
	return (0);
}
/*Function Definition */
int numberAdd(int number1, int number2)
{
	int calculateAdd =  number1 + number2;
	return calculateAdd;
}
