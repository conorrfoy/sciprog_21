#include <stdio.h>
#include <math.h>


// Declare a global variable to store the tan values
float TanArr[13];

/* convert degrees to radians */
float degtorad(float degang)
{
   return ((M_PI*degang)/180.0);
}

/* use trapezoidal rule to calculate the area */
float traprule(int N)
{
   int i;
   float area=TanArr[0]+TanArr[N];
   for(i=1; i<N; i++)  // loop upto but not including Nth element
   {
      area+=2.0*TanArr[i];
   }

   /* finish the calculation by multiplying by the scaling constant */
   area *= degtorad((60.0 - 0.0)/(2.0*(float)N));

   return area;
}

int main(void)
{
   /* Declare variables */
   int N=12, i;
   float deg, rad;
   global 
   float interval=(60.0 - 0.0)/(float)N;

   for (i=0; i<=N; i++)  // Calculate the tan for each point under the curve
   {
      deg=(float)i*interval;
      rad=degtorad(deg);
      TanArr[i]=tan(rad);
      printf("TanArr[%d]=%f (f(x) at x=%d)\n", i, TanArr[i], i);  // print the calculated tan values
   }

   float area=traprule(N);   
  
   /* print the result of the calculation and compare to the true answer*/
   printf("True answer:   %.4f\nApproximation: %.4f\n",log(2.0), area);
   
   return 0;
}
