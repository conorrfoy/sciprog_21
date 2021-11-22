# Readme for practical 6

Contains three program files 'MatMul.c', 'MatMul_main.c' and 'MatMul_func.c'. 
The first, 'MatMul.c', shows an implementation of matrix multiplication.
The second and third, 'MatMul_main.c' and 'MatMul_func.c', moves the multiplication function from the first code into a seperate files. These need to be complied together.
The folder also contains a Makefile for automating the compliation of the second/third version.


The compile and run the first program run;

$ gcc -o MatMul_c MatMul.c

$ ./MatMul_c

The compile and run the second/third program run;

$ make

$ ./mmc
