/*  Import standard Libraries */
#include <stdio.h>
#include <stdlib.h>

void fibo(int *a, int *b);  // Declare function to calculate the next fibonacci number

int main(void)
{
	int n;

	/* Ask user for length of sequence to calculate */
	printf("Enter an pos int for n:\n");
	scanf("%d", &n);
	printf("You entered %d\n", n);
	
	/* Check number for 'n' is valid */
	if (n < 1)
	{
		printf("Number less than 1\n");
		exit(1);
	}
	

	int n1 = 0, n2 = 1;  // Define first two numbers in the sequence
	printf("The Fibonaccai sequence is: \n");
	printf("%d, ", n1);


	int i;
	for (i=1; i<n-1; i++)  // Loop 'n'-1  times to calculate all but the last 'n' numbers desired by the user
	{
		fibo(&n1, &n2);  // Calculate the next fibonaccai number
		printf("%d, ", n1);
	}
	fibo(&n1, &n2);  // Calculate the last number
	printf("%d\n", n1);  // Print the last number without a comma for neatness
}

void fibo(int *a, int *b)  // Define the function to calcualte the next Fibonacci number
{
	int next;
	/* Calculate the next Fibonacci number using pointers instead of actual variables */
	next = *a + *b; 
	*a = *b;
	*b = next;
}
