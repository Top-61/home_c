all: prog

prog: main.o temp_functions.o 
	gcc -o prog main.o temp_functions.o 
	del *.o
	
	prog.exe -h


main.o: main.c
	gcc -c -o main.o main.c

temp_functions.o: temp_functions.c
	gcc -c -o temp_functions.o temp_functions.c

clean:
	del *.o prog.exe

