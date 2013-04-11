CPP=g++
CFLAGS=-Wall -g
PROGS=ex01 ex02
MACDIRS=ex01.dSYM ex02.dSYM
WINFILES=ex01.exe ex02.exe

ex01 : ex01.cpp
	$(CPP) $(CFLAGS) ex01.cpp -o ex01

ex02 : ex02.cpp
	$(CPP) $(CFLAGS) ex02.cpp -o ex02

all : $(PROGS)

clean:
	rm -rf $(PROGS) $(MACDIRS) $(WINFILES)
