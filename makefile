matmult: matmult.o main.o
	mpicc -o bin/matmult matmult.o main.o

matmult.o: src/matmult.c
	mpicc -O3 -c -Wall -Werror src/matmult.c

main.o: src/main.c
	gcc -O3 -c -Wall -Werror src/main.c

clean:
	rm -f matmult.o main.o
