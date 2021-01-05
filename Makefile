CC = gcc
FLAGS = -Wall -g

all: isort txtfind

isort: mainSort.o isort.o
	$(CC) $(FLAGS) -o isort mainSort.o isort.o 

mainSort.o: mainSort.c isort.h
	$(CC) $(FLAGS) -c mainSort.c 

isort.o: isort.c isort.h
	$(CC) $(FLAGS) -c isort.c 



txtfind: mainText.o txtfind.o
	$(CC) $(FLAGS) -o txtfind mainText.o txtfind.o 

mainText.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -c mainText.c 

txtfind.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -c txtfind.c 



.PHONY: clean all

clean:
	rm -f *.o isort txtfind