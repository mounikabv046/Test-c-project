SANDEEP.exe:fact.o rev.o pall.o big3.o sum2.o fib.o main.o
	gcc -o SANDEEP.exe fact.o rev.o pall.o big3.o sum2.o fib.o main.o
fact.o:fact.c
	gcc -c fact.c
rev.o:rev.c
	gcc -c rev.c
pall.o:pall.c
	gcc -c pall.c
big3.o:big3.c
	gcc -c big3.c
sum2.o:sum2.c
	gcc -c sum2.c
fib.o:fib.c
	gcc -c fib.c
main.o:main.c
	gcc -c main.c
clean:
	rm -rf *.o
