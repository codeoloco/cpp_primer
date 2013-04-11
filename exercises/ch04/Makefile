CPP=g++
CFLAGS=-Wall -g
PROGS=ex01 ex02 ex03
MACDIRS=ex01.dSYM ex02.dSYM ex03.dSYM
WINFILES=ex01.exe ex02.exe ex03.exe

ex01 : ex01.cpp
	$(CPP) $(CFLAGS) ex01.cpp -o ex01

ex02 : ex02.cpp
	$(CPP) $(CFLAGS) ex02.cpp -o ex02

ex03 : ex03.cpp
	$(CPP) $(CFLAGS) ex03.cpp -o ex03

all : $(PROGS)

clean:
	rm -rf $(PROGS) $(MACDIRS) $(WINFILES)
