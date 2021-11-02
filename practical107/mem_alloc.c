/* Import standard libraries */
#include<stdio.h>
#include<stdlib.h>


/* Delcare functions to allocate, fill, print to screen, and free an array */
int* allocatearray(int n);
void fillwithones(int* array, int n);
void printarray(int *array, int n);
void freearray(int* array);


int main()
{
	int n;
	int* array_main;  // define local array pointer 

	/* Ask user for size of array to fill */
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	

	array_main = allocatearray(n);  // Allocate memory for array 
	fillwithones(array_main, n);  // Fill array with 1's
	printarray(array_main, n);  // Print the array to the screen
	freearray(array_main);  // Free the array memory
	array_main = NULL;  // Free the array pointer

	return 0;
}


int* allocatearray(int n)  // Define function to allocate memory for array
{
	int* array;
	array = (int*) malloc(n * sizeof(int));  // Allocate memory for array for 'n' elements
	printf("Array of size %d allocated.\n", n);  // Print size of array
	return array;
}

void fillwithones(int* array, int n)  // Define function to fill the array with 1's
{
	int i;
	
	for (i=0; i<n; i++)
		array[i] = 1;  // set each element to 1
}

void printarray(int *array, int n)  // Define function to print the array contents to the screen
{
	int i;

	for (i=0; i<n; i++)
		printf("%d ", array[i]);  // Print each element of the array to the screen
	printf("\n");
}

void freearray(int* array)  // Free the memory allocated to the array 
{
	free(array);
	printf("Array freed.\n");
}
