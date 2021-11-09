/* Include standard libraries  */
#include<stdio.h>


int GCD_euclid(int a, int b);  // Declare function to calculate the greatest common divisor using the euclidean algorithm
int GCD_recursive(int a, int b);  // Declare function to calculate the greatest common divisor using a recursive algorithm


int main(void)
{
	int a, b, GCD_e, GCD_r;  // Declare variables to be used to store a,b, and two variables for the two GCD methods

	/* Ask the user for two variables to get the GCD of */
	printf("Insert two integers: ");
	scanf("%i, %i", &a, &b);

	
	/* Check a and b are positive */
	if (a <= 0 || b <= 0)
	{
		printf("Try again, both numbers have to be positive integers\n");
		return 1;
	}


	/* print the results of the algorithms to the screen */
	printf("Using the Eculid Algo: GCD(%i, %i) = %i\n", a, b, GCD_euclid(a,b));
	printf("Using the Recursive Algo: GCD(%i, %i) = %i\n", a, b, GCD_recursive(a, b));		  

	return 0;
}


int GCD_euclid(int a, int b)  // Define the euclid function 
{	
	int temp;
	while(b != 0)  // Calculate the GCD using the iterative method
	{
		temp = b;
		b = a%b;
		a = temp;
	}
	return a;
}


int GCD_recursive(int a, int b)  // Define the recursive function 
{
	if (b == 0)
		return a;
	else
		return GCD_recursive(b, a%b);  // Calculate GCD using the recursive method
}
