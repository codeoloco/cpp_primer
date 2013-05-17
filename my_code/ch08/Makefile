CPP=c++
CFLAGS=-Wall -g
CPP11=-std=c++11 -stdlib=libc++
PROGS=inline
MACDIRS=inline.dSYM
WINFILES=inline.exe

inline : inline.cpp
	$(CPP) $(CFLAGS) inline.cpp -o inline

all : $(PROGS)

clean:
	rm -rf $(PROGS) $(MACDIRS) $(WINFILES)
