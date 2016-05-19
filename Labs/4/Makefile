main: main.o proc.o
	gcc -o main main.o proc.o -lm

main.o: main.c
	gcc -c main.c -lm

proc.o: proc.c
	gcc -c proc.c -lm

.PHONY: clean
clean:
	rm -rf *.o main
