CPP=g++
CFLAGS=-Wall -g
PROGS=condit switch
MACDIRS=condit.dSYM switch.dSYM
WINFILES=condit.exe switch.exe

condit : condit.cpp
	$(CPP) $(CFLAGS) condit.cpp -o condit

switch : switch.cpp
	$(CPP) $(CFLAGS) switch.cpp -o switch

all : $(PROGS)

clean:
	rm -rf $(PROGS) $(MACDIRS) $(WINFILES)
