mybc: main.o fstack.o cstack.o stack.o bigfunction.o
	cc main.o fstack.o cstack.o stack.o bigfunction.o -lm -o mybc

main.o: stack.c stack.h cstack.c cstack.h fstack.c fstack.h bigfunction.c big.h main.c
	cc -c main.c
	
bigfunction.o: bigfunction.c big.h
	cc -c bigfunction.c
	
stack.o: stack.c stack.h
	cc -c stack.c

fstack.o: fstack.c fstack.h
	cc -c fstack.c
	
cstack.o: cstack.c cstack.h
	cc -c cstack.c	
