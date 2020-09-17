all: hello
hello.o: hello.c
       gcc -std=c99 -Wall -pedantic -c hello.c -o hello.o

hello: hello.o
       gcc -std=c99 -Wall -pedantic hello.o -o hello
	   
clean: 
       rm -i hello.o hello