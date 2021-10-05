#include <stdio.h>
#include <math.h>


/* create a new function equal to the function to be integrated */
float f_x(float x)
{
   return tan(x);
}


int main(void)
{
/* Declare variables */
   int i, N;
   float a, b, sum;

   a = 0;
   b = M_PI/3;
   N = 12;

/* First part of the sum - first and last element */
   sum = f_x(a) + f_x(b);
   
/* loop to add the remaining elements */
   for (i=1; i<N; i++) // loop upto but not including Nth element
   {
      sum += 2.0*f_x((float)i*((b-a)/(float)N)); // Calculate the x value at each step and find 2*f(x)
   }

/* finish the calculation by multiplying by the scaling constant */
   sum *= ((float)b - (float)a)/(2.0*(float)N);
   
/* print the result of the calculation and compare to the true answer*/
   printf("True answer:   %.4f\nApproximation: %.4f\n",log(2.0), sum);

}
