/* Include standard Libraries */
#include<stdio.h>
#include<stdlib.h>
#include"magic_square.h"

int main(void)
{
	/* Ask user for size of magic square to check */
	int n;
	printf("Enter the square side:\n");
	scanf("%d", &n);
	
	/* Allocate a matrix */
	int i;
	int ** magicSquare = malloc(n * sizeof(int));

	for (i=0; i<n; i++)
	{
		magicSquare[i] = malloc(n * sizeof(int));
	}
	
	/* Fill the matrix with numbers entered by the user */
	int j;
	for (i=0; i<n; i++)
	{
		printf("Enter the elements in row #%d, separated by blanks and/or linebeaks:\n", i+1);
		for (j=0; j<n; j++)
		{
			scanf("%d", &magicSquare[i][j]);
		}
	}
	
	/* Determine if the square is magic using the external function and print answer to the screen */
	printf("The square %s magic.\n", isMagicSquare(magicSquare, n) ? "is" : "is not");


	/* Release the allocated memory */
	for (i=0; i<n; i++)
	{
		free(magicSquare[i]);
	}
	free(magicSquare);
	
	return 0;
}
