CPP=clang++
CFLAGS=-Wall -g
CPP11=-std=c++11 -stdlib=libc++
PROGS=ex06 ex07 ex08 ex09
MACDIRS=ex06.dSYM ex07.dSYM ex08.dSYM ex09.dSYM
WINFILES=ex06.exe ex07.exe ex08.exe ex09.exe

ex06 : ex06.cpp
	$(CPP) $(CFLAGS) $(CPP11) ex06.cpp -o ex06

ex07 : ex07.cpp
	$(CPP) $(CFLAGS) $(CPP11) ex07.cpp -o ex07

ex08 : ex08.cpp
	$(CPP) $(CFLAGS) $(CPP11) ex08.cpp -o ex08

ex09 : ex09.cpp
	$(CPP) $(CFLAGS) $(CPP11) ex09.cpp -o ex09

all : $(PROGS)

clean:
	rm -rf $(PROGS) $(MACDIRS) $(WINFILES)
