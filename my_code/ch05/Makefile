CPP=g++
CFLAGS=-Wall -g
PROGS=forloop num_test express formore bigstep forstr1 plus_one
MACDIRS=forloop.dSYM num_test.dSYM express.dSYM formore.dSYM bigstep.dSYM \
	forstr1.dSYM plus_one.dSYM
WINFILES=forloop.exe num_test.exe express.exe formore.exe bigstep.exe \
	 forstr1.exe plus_one.exe

forloop : forloop.cpp
	$(CPP) $(CFLAGS) forloop.cpp -o forloop

num_test : num_test.cpp
	$(CPP) $(CFLAGS) num_test.cpp -o num_test

express : express.cpp
	$(CPP) $(CFLAGS) express.cpp -o express

formore : formore.cpp
	$(CPP) $(CFLAGS) formore.cpp -o formore

bigstep : bigstep.cpp
	$(CPP) $(CFLAGS) bigstep.cpp -o bigstep

forstr1 : forstr1.cpp
	$(CPP) $(CFLAGS) forstr1.cpp -o forstr1

plus_one : plus_one.cpp
	$(CPP) $(CFLAGS) plus_one.cpp -o plus_one

all : $(PROGS)

clean:
	rm -rf $(PROGS) $(MACDIRS) $(WINFILES)
