#include <stdio.h>
#include <math.h>

int main(void) 
{

/* Declare variables */
   int i,j,inum,tmp;
   float fnum,numdigits;
   char binnum[60];

/* Intialise 4-byte integer */
   inum = 33554431;
/* Convert to 4-byte float */
   fnum = (float) inum;


/* Convert to binary number (string) [order is reversed: setting tmp to 4 will return 001, not 100*/
   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }
   
/* Reorder binary string to correct order*/
   for(j=0;j<i/2;j++)
   {
       char tmp_char=binnum[j];
       binnum[j]=binnum[i-j-1];
       binnum[i-j-1]=tmp_char;
   }
   
/* Terminate the string */
   binnum[i] = '\0';

/* Complete the expression */
   numdigits = ceil(logf(fnum)/logf(2.0)) + 1.0; // Calculate number of digits of fnum
   printf("The number of digits in fnum is %.0f\n",numdigits);

   printf("inum=%d,  fnum=%f, inum in binary=%s\n",inum,fnum,binnum);

}
