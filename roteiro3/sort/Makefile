main4 : shaker_sort.o
	gcc main.c -o main4 shaker_sort.o

main3 : bubble_sort.o
	gcc main.c -o main3 bubble_sort.o

main2 : insert_sort.o
	gcc main.c -o main2 insert_sort.o

main1 : select_sort.o
	gcc main.c -o main1 select_sort.o

select_sort.o : item.h
	gcc -c select_sort.c -o select_sort.o

insert_sort.o : item.h
	gcc -c insert_sort.c -o insert_sort.o

bubble_sort.o : item.h
	gcc -c bubble_sort.c -o bubble_sort.o

shaker_sort.o : item.h
	gcc -c shaker_sort.c -o shaker_sort.o

clean:
	rm *.o
