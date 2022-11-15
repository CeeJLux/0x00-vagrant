#include <stdio.h>


int sum(int k);

int main() 
{
	int a;
	printf("Enter Recursive Times: ");
	scanf("%d", &a);
	int result = sum(a);
	printf("The Recursive value is %d\n", result);
	return 0;
}

int sum(int k) {
	if (k > 0) 
	{
		return k + sum(k - 1);
	}
	else{
		return 0;
	}
}
