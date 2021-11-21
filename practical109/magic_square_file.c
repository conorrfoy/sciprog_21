/* import standard libraries */
#include<stdio.h>
#include<stdlib.h>
#define MAX_FILE_NAME 100
#include"magic_square.h"
#include<time.h>

/* declare function to get the lines in the magic square file */
int getlines(char filename[MAX_FILE_NAME]);


int main(void)
{
	/* get the name of the file storing the magic number from the user */	
	FILE *f;
	char filename[MAX_FILE_NAME];
	printf("Enter file name: ");
	scanf("%s", &filename);
	
	/* open the file and get the number of rows in the magic square */
	f = fopen(filename, "r");
	int n = getlines(filename);	
	
	/* Allocate a matrix */
	int i;
	int ** magicSquare = malloc(n * sizeof(int));

	for (i=0; i<n; i++)
	{
		magicSquare[i] = malloc(n * sizeof(int));
	}
	

	/* read the magic square in from the file and store it */
	int j;
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			fscanf(f, "%d", &magicSquare[i][j]);
		}
	}
	
	
	/* Determine if the square is magic and print the result to the screen */
	printf("The square %s magic.\n", isMagicSquare(magicSquare, n) ? "is" : "is not");
	
	
	/* time how long it takes to run the magic square function 1,000,000 times */
	time_t t1, t2;
        int _;
	t1 = clock();
        for (i=0; i<999999; i++)
        {
                _ = isMagicSquare(magicSquare, n);
        }
        t2 = clock();
        printf("Time to run isMagicSquare 1 million times: %lfsec\n", (((float) t2 - (float) t1) / (float) CLOCKS_PER_SEC)); // print the elapsed time to the screen in secs

	
	/* Release the memory allocated for the magic square */
	for (i=0; i<n; i++)
	{
		free(magicSquare[i]);
	}
	free(magicSquare);

	fclose(f);  // Close file
	
	return 0;
}


/* Define function to determine the number of lines in a file */
int getlines(char filename[MAX_FILE_NAME])
{
	FILE *fp;
	fp = fopen(filename, "r");
	int ch_read;
	int count = 0;

	while( (ch_read = fgetc(fp) ) != EOF)  // Get the next character in the file and repeat until the end of the file
	{
		if (ch_read == '\n')
		{
			count++;  // Count the number of line returns in the file
		}
	}

	printf("No. of lines %d\n", count);
	fclose(fp);
	return count;
}


/* Comments
 * isMagicSquare function is O(n*n)
 */

