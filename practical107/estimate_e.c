/* Import standard libraries */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


/* declare functions that will be used to calculate the polynomial */
int factorial(int n);  // Math library doesn't have a factorial function so we need to define it
double compute_polynomial(int n, int x);


int main()
{
	/* Declare variables need for the program */
	int order_of_polynomial;
	int size_of_array;
	double* array_of_terms;  // Array to hold terms of the polynomial
	int i, x=1;

	/* Ask user for order of the polynomial to calulate up to */
	printf("Enter the order of polynomial: ");
	scanf("%d", &order_of_polynomial);
	
	size_of_array = order_of_polynomial + 1;
	array_of_terms = (double *) malloc(size_of_array * sizeof(double));  // Used memory allocation as we don't know how big the array needs to be
	
	for (i=0; i<size_of_array; i++)
	{
		array_of_terms[i] = compute_polynomial(i,x);  // compute the terms of the pulynomial
		printf("f[%d] = %0.20f\n", i, array_of_terms[i]);  // print terms to screen
	}
	
	printf("e1 = %0.20f\n", exp(1));  // print true answer to the screen

	for (i=0; i<size_of_array; i++)
		printf("Estimate difference for term %d is %0.20f\n", i, exp(1) - array_of_terms[i]);  // Print the difference between true answer and approximation

	free(array_of_terms);  // Free the memory allocated to array_of_terms
	array_of_terms = NULL;  // Clear the pointer for the array

	return 0;
}


int factorial(int n)  // Define the function to calculate the factorial
{
        int i;
        int fact = 1;

        if (n==0)
                return 1;

        for (i=1; i<=n; i++)
                fact *= i;

        return fact;
}


double compute_polynomial(int n, int x)  // Define the function to calculate 'e'
{
	double sum = 0.0;
	int i;
	
	for (i=0; i<=n; i++)
		sum += (double) pow(x, i) / factorial(i);  // Sum the terms of the formula
	
	return sum;
}


/* Comments 
 * After about the 10th term the approximation's error stops reducing.
 * This is due to the finite precision of the calculations as the power functions can only be so accurate.
 * This is caused by the sharing of bits between the manissa and the exponent.
 * For a given exponent there are only so many bits left over for the manissa.
 * This is seen as the error flipping sign as the closest order of precision falls one side or the other of zero.
 */
