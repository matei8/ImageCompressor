build:
	gcc main.c functii.c -o main.o

run: main.o
	./main.o

clean:
	rm -f *.o