#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	printf("Show the Square root of: ");    
       	scanf("%d\n", &a);			        
	printf("Square root = %f \n", sqrt(a));
				        
	printf("Power\nType Number: ");					        
	scanf("%d\n", &b);						        
	printf("Insert Power: ");					       
	scanf("%d\n", &c);						        
	printf("= %f\n", pow(b, c));
	return 0;
}
