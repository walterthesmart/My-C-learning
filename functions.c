#include <stdio.h>

/**
 * Standard library functions- printf()- which is defined in the stdio.h header file.
 * sqrt() calcs the square root of a number which is defined in the math.h header file.
 *User function..functions the user creates
 */
void greeting()  /* Function Definition*/
{
	printf("Hello my friend\n");
}

int main(void)
{
	greeting();  /*Calling a function*/
	greeting();
	greeting();
	printf("ALl functions are done running");
	return (0);
}
