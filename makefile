ex1: ex3.o funcs.o
	gcc ex3.o funcs.o -o ex3

ex1.o: ex3.c
	gcc -c ex3.c 

funcs.o:	funcs.o 	funcs.h
	gcc -c funcs.c

clean:
	rm *.o
