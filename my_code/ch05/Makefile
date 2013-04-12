CPP=g++
CFLAGS=-Wall -g
PROGS=forloop num_test express formore bigstep forstr1 plus_one block \
      forstr2 equal compstr1 compstr2 while waiting dowhile textin1
MACDIRS=forloop.dSYM num_test.dSYM express.dSYM formore.dSYM bigstep.dSYM \
	forstr1.dSYM plus_one.dSYM block.dSYM forstr2.dSYM equal.dSYM \
	compstr1.dSYM compstr2.dSYM while.dSYM waiting.dSYM dowhile.dSYM \
	textin1.dSYM
WINFILES=forloop.exe num_test.exe express.exe formore.exe bigstep.exe \
	 forstr1.exe plus_one.exe block.exe forstr2.exe equal.exe \
	 compstr1.exe comsptr2.exe while.exe waiting.exe dowhile.exe \
	 textin1.exe

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

block : block.cpp
	$(CPP) $(CFLAGS) block.cpp -o block

forstr2 : forstr2.cpp
	$(CPP) $(CFLAGS) forstr2.cpp -o forstr2

equal : equal.cpp
	$(CPP) $(CFLAGS) equal.cpp -o equal

compstr1 : compstr1.cpp
	$(CPP) $(CFLAGS) compstr1.cpp -o compstr1

compstr2 : compstr2.cpp
	$(CPP) $(CFLAGS) compstr2.cpp -o compstr2

while : while.cpp
	$(CPP) $(CFLAGS) while.cpp -o while

waiting : waiting.cpp
	$(CPP) $(CFLAGS) waiting.cpp -o waiting

dowhile : dowhile.cpp
	$(CPP) $(CFLAGS) dowhile.cpp -o dowhile

textin1 : textin1.cpp
	$(CPP) $(CFLAGS) textin1.cpp -o textin1

all : $(PROGS)

clean:
	rm -rf $(PROGS) $(MACDIRS) $(WINFILES)
