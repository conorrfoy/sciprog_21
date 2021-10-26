CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

all: mmc 

mmc: MatMul_main.o MatMul_func.o
	$(CC) -o $@ $^ $(LDFLAGS)  # Compile final excuitable
##$(CC) -o mmc MatMul_main.o MatMul_func.o $(LDFLAGS)     

MatMul_func.o: MatMul_func.c
	$(CC) -c $(CCFLAGS) $<  # Compile the matrix multiplication function
##$(CC) -c $(CCFLAGS) MatMul_func.c

MatMul_main.o: MatMul_main.c
	$(CC) -c $(CCFLAGS) $<  # Compile the main code
##$(CC) -c $(CCFLAGS) MatMul_main.c

clean:
	rm *.o  # removes the temporary MatMul_main.o MatMul_func.o
