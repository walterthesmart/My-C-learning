/*Local variables- declared inside a fuction or block. can't be known outside their own
 * Global variables - defined outside a function, usually on top of a program
 */

#include <stdio.h>
int g = 20;  /*Global variable*/


int main(void)
{
	/*LOcal variable */
	int a = 5;
	int b = 10;
	g = 50
	printf("Variables a = %d, b = %d and g = %d\n", a, b, g);

	return (0);
}
