CPP=g++
CFLAGS=-Wall -g
PROGS=condit switch enum jump cinfish cingolf outfile sumafile
MACDIRS=condit.dSYM switch.dSYM enum.dSYM jump.dSYM cinfish.dSYM cingolf.dSYM \
    outfile.dSYM sumafile.dSYM
WINFILES=condit.exe switch.exe enum.exe jump.exe cinfish.exe cingolf.exe \
    outfile.exe sumafile.exe
WORKINGFILES=carinfo.txt

condit : condit.cpp
	$(CPP) $(CFLAGS) condit.cpp -o condit

switch : switch.cpp
	$(CPP) $(CFLAGS) switch.cpp -o switch

enum : enum.cpp
	$(CPP) $(CFLAGS) enum.cpp -o enum

jump : jump.cpp
	$(CPP) $(CFLAGS) jump.cpp -o jump

cinfish : cinfish.cpp
	$(CPP) $(CFLAGS) cinfish.cpp -o cinfish

cingolf : cingolf.cpp
	$(CPP) $(CFLAGS) cingolf.cpp -o cingolf

sumafile : sumafile.cpp
	$(CPP) $(CFLAGS) sumafile.cpp -o sumafile

all : $(PROGS)

clean:
	rm -rf $(PROGS) $(MACDIRS) $(WINFILES) $(WORKINGFILES)
