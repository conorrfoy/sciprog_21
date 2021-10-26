#include <stdio.h>  // import standard input/output library

int main(void)
{
	int i;
	double a;
	printf("Enter an int and a double, seprated by a ','\n");  // Ask user for some inputs
	scanf("%d, %lf", &i, &a);  // Map inputs to local valiables
	printf("You entered %d and %lf\n", i,a);  // Print inputs to check they were read correctly

	int *pointer_to_i = &i;	 // Define a pointer
	
	printf("The value of i is %d\n", i);
	printf("The value of i is also %d\n", *pointer_to_i);  // Example showing how a pointer can be used
	printf("The value address of i is %d\n", &i);

	return 0;
}
