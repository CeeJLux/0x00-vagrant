#include<stdio.h>
/**
 * More Functions Parameter Practice
 *
 */

int defcal() /*Declaring Function8*/
{
	float x;
	float y;
	
	printf("Simple Division of Numbers\n");
	printf("Input the Numerator: ");
	scanf("%2f", &x);
	printf("Input the Denominator: ");
	scanf("%f", &y);
	printf("The Result is : %.2f \n", x/y);
	return 0;
}

int main()
{
	defcal();
	return 0;
}

