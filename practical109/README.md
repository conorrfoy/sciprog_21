# Readme for practical 9

Contains two programs 'magic_square.c' and 'magic_square_file.c'. 
Both use a function contained in a seperate header file, but 'magic_square.c' reads the square in from the user whereas 'magic_square_file.c' reads it from a user entered file.
'magic_square.txt' contains a 3x3 magic square. 'not_magic_square.txt' contains a 3x3 square that is not magic.

The compile and run the first program run;

$ gcc -o magic_square_c magic_square.c

$ ./magic_square_c

The compile and run the second program run;

$ gcc -o magic_square_file_c magic_square_file.c

$ ./magic_square_file_c
