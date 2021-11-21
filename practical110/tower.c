/* include standard libraries */
#include<stdio.h>
#include<stdlib.h>


/* Define recursive function to complete one step of the sequence in solving the tower of hanoi */
void hanoi(int n, int source, int mid, int dest)
{
	if (n == 1)  // if down to the biggest disk move it from start to the final rod
	{
		printf("Moved disk %d from %d to %d\n", n, source, dest);
	}
	else
	{
		hanoi(n-1, source, dest, mid);  // move disk in the way to the middle rod
		printf("Moved disk %d from %d to %d\n", n, source, dest);  // Move the next biggest disk to the middle rod
		hanoi(n-1, mid, source, dest);  // move freed disk to final rod
	}
}

void main()
{
	int h;

	/* ask the user for the number of disks */ 
	printf("Enter number of disks: \n");
	scanf("%d", &h);
	printf("Tower of Hanoi solution for %d disks:\n", h);
	hanoi(h, 1, 2, 3);  // determine the sequence to complete the problem
}
