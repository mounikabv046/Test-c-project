ZXC.exe:big3.o fact.o sum2.o  main.o
	gcc -o ZXC.exe big3.o fact.o sum2.o  main.o

main.o:main.c
	gcc -c main.c

big3.o:big3.c
	gcc -c big3.c

fact.o:fact.c
	gcc -c fact.c
	
sum2.o:sum2.c
	gcc -c sum2.c

