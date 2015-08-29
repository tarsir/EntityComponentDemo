INCLUDE_DIRS=-I . -I ~/Development/Libs
CC=g++
CFLAGS=-c -Wall
EXECUTABLE=test.out
COMPILE_EXE=$(CC) -Wall
COMPILE_LIBS=$(CC) $(CFLAGS) $(INCLUDE_DIRS) 

all: core

core: main.o
	$(COMPILE_EXE) main.o -o $(EXECUTABLE)

main.o: main.cpp
	$(COMPILE_LIBS) main.cpp 

clean: 
	rm *o
