CPP=g++
CFLAGS=-Wall -g
PROGS=ex01
MACDIRS=ex01.dSYM
WINFILES=ex01.exe

ex01 : ex01.cpp
	$(CPP) $(CFLAGS) ex01.cpp -o ex01

all : $(PROGS)

clean:
	rm -rf $(PROGS) $(MACDIRS) $(WINFILES)
