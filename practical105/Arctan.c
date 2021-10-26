/* import required libraries */
#include <stdio.h>
#include <math.h>


double arctan_mac(double *x, double *delta);  // Declare function to calculate arctan using the maclaurin series
double arctan_hyp(double *x);  // Declare function to calculate arctan using hyperbolic using logs

int main()
{
	double prec;
	printf("Enter precision for Maclaurin series:\n");  // Ask user for Maclaurin seris percision
	scanf("%lf", &prec);
	
	double begin,end;
	printf("Enter start and end points for x:\n");  // ask user for the start and end points for calculating sequence of arctans
	scanf("%lf,%lf", &begin, &end);

	double a = ((fabs(begin) + fabs(end))/prec) + 1;  // Calculate the number of arctan calculations to compute
	int asize = a;
	
	/* Define arrays to store arctan calculations */
	double tan_mac[asize];   
	double tan_hyp[asize];

	double i;
	int j = 0;
	
	/* Calculate arctan using the two different methods */
	for (i=begin; i<end; i+=prec)
	{
		tan_mac[j] = arctan_mac(&i, &prec);
		tan_hyp[j] = arctan_hyp(&i);
		printf("The difference between tan_mac[%.3lf] and tan_hyp[%.3lf] is %.10lf\n", i, i, fabs(tan_mac[j] - tan_hyp[j]));  // Print difference between to methods
	j++;
	}

	return 0;
}

double arctan_mac(double *x, double *delta)  // Define Maclaurin method for arctan
{
	double arctan = 0;
	double elem, val;
	int n = 0;
	do 
	{  // Compute Maclaurin approximation for arctan
		val = 2*n + 1;
		elem = pow(*x, val)/val;
		arctan += elem;
		n++;
	}
	while (fabs(elem) >= *delta);
	return arctan;
}

double arctan_hyp(double *x)  // Define log method for arctan 
{
	return (log(1.0 + *x) - log(1.0 - *x))/2.0;  // Compute arctan using logs
}
