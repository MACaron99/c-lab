all: Calculator

Calculator: main.o calculator.o
	gcc main.o calculator.o -o Calculator

main.o: main.c
	gcc -c main.c -o main.o

calculator.o: calculator.c
	gcc -c calculator.c -o calculator.o

clean:
	rm -f Calculator *.o

