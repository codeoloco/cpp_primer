CPP=clang++
CFLAGS=-Wall -g
CPP11=-std=c++11 -stdlib=libc++
PROGS=ex01 ex02 ex03 ex04 ex05 ex06 ex07 ex08 ex09 ex10
MACDIRS=ex01.dSYM ex02.dSYM ex03.dSYM ex04.dSYM ex05.dSYM ex06.dSYM ex07.dSYM \
    ex08.dSYM ex09.dSYM ex10.dSYM
WINFILES=ex01.exe ex02.exe ex03.exe ex04.exe ex05.exe ex06.exe ex07.exe \
    ex08.exe ex09.exe ex10.exe

ex01 : ex01.cpp
	$(CPP) $(CFLAGS) ex01.cpp -o ex01

ex02 : ex02.cpp
	$(CPP) $(CFLAGS) $(CPP11) ex02.cpp -o ex02 

ex03 : ex03.cpp
	$(CPP) $(CFLAGS) ex03.cpp -o ex03

ex04 : ex04.cpp
	$(CPP) $(CFLAGS) ex04.cpp -o ex04

ex05 : ex05.cpp
	$(CPP) $(CFLAGS) ex05.cpp -o ex05

ex06 : ex06.cpp
	$(CPP) $(CFLAGS) ex06.cpp -o ex06

ex07 : ex07.cpp
	$(CPP) $(CFLAGS) ex07.cpp -o ex07

ex08 : ex08.cpp
	$(CPP) $(CFLAGS) ex08.cpp -o ex08

ex09 : ex09.cpp
	$(CPP) $(CFLAGS) ex09.cpp -o ex09

ex10 : ex10.cpp
	$(CPP) $(CFLAGS) ex10.cpp -o ex10

all : $(PROGS)

clean:
	rm -rf $(PROGS) $(MACDIRS) $(WINFILES)
