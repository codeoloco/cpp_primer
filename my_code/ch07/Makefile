CPP=clang++
CFLAGS=-Wall -g
CPP11=-std=c++11 -stdlib=libc++
PROGS=calling protos twoarg lotto arrfun1 arrfun2 arrfun3 arrfun4 \
	strgfun strgback travel strctfun strctptr topfive arrobj recur ruler \
	fun_ptr arfupt
MACDIRS=calling.dSYM protos.dSYM twoarg.dSYM lotto.dSYM arrfun1.dSYM \
	arrfun2.dSYM arrfun3.dSYM arrfun4.dSYM strgfun.dSYM strgback.dSYM \
	travel.dSYM strctfun.dSYM strctptr.dSYM topfive.dSYM arrobj.dSYM \
	recur.dSYM ruler.dSYM fun_ptr.dSYM arfupt.dSYM
WINFILES=calling.exe protos.exe twoarg.exe lotto.exe arrfun1.exe arrfun2.exe \
	arrfun3.exe arrfun4.exe strgfun.exe strgback.exe travel.exe strctdun.exe \
	strctptr.exe topfive.exe arrobj.exe recur.exe ruler.exe fun_ptr.exe \
	arfupt.exe

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

strgback : strgback.cpp
	$(CPP) $(CFLAGS) $(CPP11) strgback.cpp -o strgback

travel : travel.cpp
	$(CPP) $(CFLAGS) $(CPP11) travel.cpp -o travel

strctfun : strctfun.cpp
	$(CPP) $(CFLAGS) $(CPP11) strctfun.cpp -o strctfun

strctptr : strctptr.cpp
	$(CPP) $(CFLAGS) $(CPP11) strctptr.cpp -o strctptr

topfive : topfive.cpp
	$(CPP) $(CFLAGS) $(CPP11) topfive.cpp -o topfive

arrobj : arrobj.cpp
	$(CPP) $(CFLAGS) $(CPP11) arrobj.cpp -o arrobj

recur : recur.cpp
	$(CPP) $(CFLAGS) $(CPP11) recur.cpp -o recur

ruler : ruler.cpp
	$(CPP) $(CFLAGS) $(CPP11) ruler.cpp -o ruler

fun_ptr : fun_ptr.cpp
	$(CPP) $(CFLAGS) $(CPP11) fun_ptr.cpp -o fun_ptr

arfupt : arfupt.cpp
	$(CPP) $(CFLAGS) $(CPP11) arfupt.cpp -o arfupt

all : $(PROGS)

clean:
	rm -rf $(PROGS) $(MACDIRS) $(WINFILES)
