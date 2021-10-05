#include <stdio.h>


int main(void) 
{
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   

/* First sum */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) // Add in asending order
   {
      sum1 += 1.0/i; // Add each fraction to the sum
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) // Add in desending order
   { 
      sum2 += 1.0/i; // Add each fraction to the sum
   }

   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference */
   diff = sum2 - sum1; // Calculate the difference

   printf(" Difference between the two is %f\n",diff);

}
