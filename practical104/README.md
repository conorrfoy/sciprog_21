# Readme for practical 4

Contains three versions of the Trapezoidal Rule implementation. 
The first is the same from practical 3. 
The second uses a function to encapsulate the steps of the Trapezoidal Rule calculation. It implements a generic function that allows the endpoints to be passed to the function. 
The third uses a similiar function but only the number of steps is passed to the function. This is inline with the requirements of the excercise. 

The compile and run the program run;

$ gcc -o Trapezoidal_c Trapezoidal.c -lm

$ ./Trapezoidal_c

or for the second version run;

$ gcc -o Trapezoidal_v2_c Trapezoidal_v2.c -lm

$ ./Trapezoidal_v2_c

or for the third version run;

$ gcc -o Trapezoidal_v3_c Trapezoidal_v3.c -lm

$ ./Trapezoidal_v3_c
