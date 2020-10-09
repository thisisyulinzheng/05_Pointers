all: main.o
	gcc -o main main.o
	
clean:
	rm *.o
