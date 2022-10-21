#include <stdio.h>

/**
 * Long Comment Formatting
 * 
 * 
 * 
 */
 
int main(void)
{
int a[3]; //declaring array size
scanf("%d", &a[0]);
scanf("%d", &a[1]);
scanf("%d", &a[2]);

int i;
for(i=0; i<3; i++) //creating for loop 
{
    printf("The int stored in the array are : " "%d \n", a[i]); //calling array
}

    return 0;
}
