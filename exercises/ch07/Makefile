CPP=clang++
CFLAGS=-Wall -g
CPP11=-std=c++11 -stdlib=libc++
PROGS=ex01 ex02 ex03 ex04 ex05
MACDIRS=ex01.dSYM ex02.dSYM ex03.dSYM ex04.dSYM ex05.dSYM
WINFILES=ex01.exe ex02.exe ex03.exe ex04.exe ex05.exe

ex01 : ex01.cpp
	$(CPP) $(CFLAGS) $(CPP11) ex01.cpp -o ex01

ex02 : ex02.cpp
	$(CPP) $(CFLAGS) $(CPP11) ex02.cpp -o ex02

ex03 : ex03.cpp
	$(CPP) $(CFLAGS) $(CPP11) ex03.cpp -o ex03

ex04 : ex04.cpp
	$(CPP) $(CFLAGS) $(CPP11) ex04.cpp -o ex04

ex05 : ex05.cpp
	$(CPP) $(CFLAGS) $(CPP11) ex05.cpp -o ex05

all : $(PROGS)

clean:
	rm -rf $(PROGS) $(MACDIRS) $(WINFILES)
