all: main.o
	gcc -o main main.o

run:
	./main
	
clean:
	rm *.o
