#include<stdio.h>  // Import standard library 

int main()
{
	/* Define size of matrices, input matrices A & B, and output matrix */
	int n=5, p=3, q=4;
	double A[n][p], B[p][q], C[n][q];
	int i, j, k;  // Define index variables

	// Initialise the three matrices
	for(i=0; i<n; i++)
	{
		for (j=0; j<p; j++)
		{
			A[i][j]=i+j;
		}
	}


	for(i=0; i<p; i++)
	{
		for (j=0; j<q; j++)
		{
			B[i][j]=i-j;
		}
	}


	for(i=0; i<n; i++)
	{
		for (j=0; j<q; j++)
		{
			C[i][j]=0.0;  // Set C to zero to avoid calculations errors
		}
	}

	//  Perform matrix multiplication using external function
	matmult(n, p, q, A, B, C);

	//  Print out matrices
	printf("\nThe A matrix is:\n\n");

	for(i=0; i<n; i++)
	{
		for(j=0; j<p; j++)
		{
			printf("%3.0f", A[i][j]);  // include space to align each line of the matrix
		}
		printf("\n");
	}

	printf("\nThe B matrix is:\n\n");	
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			printf("%3.0f", B[i][j]);
		}
		printf("\n");
	} 
	
	printf("\nThe C matrix is:\n\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<q; j++)
		{
			printf("%3.0f", C[i][j]);
		}
		printf("\n");
	} 
	
	return 0;
}
