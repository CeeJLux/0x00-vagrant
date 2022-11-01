#include <stdio.h>
/**
 * Practice on Functions
 *
 *
 */

void defname(char name[], int age) 
{
	printf("Hello %s,\nWelcome", name);
	printf("\nYou are Currently %d Year(s) old.\n", 2022 - age);
}

int main ()
{
	defname("Jacob", 1994);
	return 0;
}
