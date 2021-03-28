objects = bst.o stack.o

main4 : $(objects)
	gcc main4.c -o main4 $(objects) -lm

main3 : $(objects)
	gcc main3.c -o main3 $(objects) -lm

main2 : $(objects)
	gcc main2.c -o main2 $(objects) -lm

main1 : $(objects)
	gcc main1.c -o main1 $(objects) -lm

bst.o : bst.h
	gcc -c bst.c -o bst.o
stack.o : stack.h
	gcc -c stack.c -o stack.o

clean:
	rm *.o
