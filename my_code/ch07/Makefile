CPP=clang++
CFLAGS=-Wall -g
CPP11=-std=c++11 -stdlib=libc++
PROGS=calling protos twoarg lotto arrfun1 arrfun2 arrfun3 arrfun4 strgfun
MACDIRS=calling.dSYM protos.dSYM twoarg.dSYM lotto.dSYM arrfun1.dSYM \
	arrfun2.dSYM arrfun3.dSYM arrfun4.dSYM strgfun.dSYM
WINFILES=calling.exe protos.exe twoarg.exe lotto.exe arrfun1.exe arrfun2.exe \
	arrfun3.exe arrfun4.exe strgfun.exe

calling : calling.cpp
	$(CPP) $(CFLAGS) $(CPP11) calling.cpp -o calling

protos : protos.cpp
	$(CPP) $(CFLAGS) $(CPP11) protos.cpp -o protos

twoarg : twoarg.cpp
	$(CPP) $(CFLAGS) $(CPP11) twoarg.cpp -o twoarg

lotto : lotto.cpp
	$(CPP) $(CFLAGS) $(CPP11) lotto.cpp -o lotto

arrfun1 : arrfun1.cpp
	$(CPP) $(CFLAGS) $(CPP11) arrfun1.cpp -o arrfun1

arrfun2 : arrfun2.cpp
	$(CPP) $(CFLAGS) $(CPP11) arrfun2.cpp -o arrfun2

arrfun3 : arrfun3.cpp
	$(CPP) $(CFLAGS) $(CPP11) arrfun3.cpp -o arrfun3

arrfun4 : arrfun4.cpp
	$(CPP) $(CFLAGS) $(CPP11) arrfun4.cpp -o arrfun4

strgfun : strgfun.cpp
	$(CPP) $(CFLAGS) $(CPP11) strgfun.cpp -o strgfun

all : $(PROGS)

clean:
	rm -rf $(PROGS) $(MACDIRS) $(WINFILES)
