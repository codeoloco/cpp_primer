CPP=g++
CFLAGS=-Wall -g
PROGS=agetomnths astro blinkmice ctof showtime ftoy myaddr
MACDIRS=agetomnths.dSYM astro.dSYM blinkmice.dSYM showtime.dSYM ftoy.dSYM \
    myaddr.dSYM ctof.dSYM

agetomnths : agetomnths.cpp
	$(CPP) $(CFLAGS) agetomnths.cpp -o agetomnths

astro : astro.cpp
	$(CPP) $(CFLAGS) astro.cpp -o astro

blinkmice : blinkmice.cpp
	$(CPP) $(CFLAGS) blinkmice.cpp -o blinkmice

ctof : ctof.cpp
	$(CPP) $(CFLAGS) ctof.cpp -o ctof

showtime : showtime.cpp
	$(CPP) $(CFLAGS) showtime.cpp -o showtime

ftoy : ftoy.cpp
	$(CPP) $(CFLAGS) ftoy.cpp -o ftoy

myaddr : myaddr.cpp
	$(CPP) $(CFLAGS) myaddr.cpp -o myaddr

all : $(PROGS)

clean:
	rm -rf $(PROGS) $(MACDIRS)
