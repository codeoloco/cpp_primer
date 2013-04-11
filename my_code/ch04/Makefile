CPP=g++
CFLAGS=-Wall -g
PROGS=arrayone strings42 instr1 instr2 instr3 numstr strtype1 strtype2 strtype3 strtype4 structur assgn_st arrstruc address pointer init_ptr use_new arraynew addpntrs ptrstr newstrct delete mixtypes choices
MACDIRS=arrayone.dSYM strings42.dSYM instr1.dSYM instr2.dSYM instr3.dSYM numstr.dSYM strtype1.dSYM strtype2.dSYM strtype3.dSYM strtype4.dSYM structur.dSYM assgn_st.dSYM arrstruc.dSYM address.dSYM pointer.dSYM init_ptr.dSYM use_new.dSYM arraynew.dSYM addpntrs.dSYM ptrstr.dSYM newstrct.dSYM delete.dSYM mixtypes.dSYM choices.dSYM
WINFILES=arrayone.exe strings42.exe instr1.exe instr2.exe instr3.exe numstr.exe strtype1.exe strtype2.exe strtype3.exe strtype4.exe structur.exe assgn_st.exe arrstruc.exe address.exe pointer.exe init_ptr.exe use_new.exe arraynew.exe addpntrs.exe ptrstr.exe newstrct.exe delete.exe mixtypes.exe choices.exe

arrayone : arrayone.cpp
	$(CPP) $(CFLAGS) arrayone.cpp -o arrayone

strings42 : strings42.cpp
	$(CPP) $(CFLAGS) strings42.cpp -o strings42

instr1 : instr1.cpp
	$(CPP) $(CFLAGS) instr1.cpp -o instr1

instr2 : instr2.cpp
	$(CPP) $(CFLAGS) instr2.cpp -o instr2

instr3 : instr3.cpp
	$(CPP) $(CFLAGS) instr3.cpp -o instr3

numstr : numstr.cpp
	$(CPP) $(CFLAGS) numstr.cpp -o numstr

strtype1 : strtype1.cpp
	$(CPP) $(CFLAGS) strtype1.cpp -o strtype1

strtype2 : strtype2.cpp
	$(CPP) $(CFLAGS) strtype2.cpp -o strtype2

strtype3 : strtype3.cpp
	$(CPP) $(CFLAGS) strtype3.cpp -o strtype3

strtype4 : strtype4.cpp
	$(CPP) $(CFLAGS) strtype4.cpp -o strtype4

structur : structur.cpp
	$(CPP) $(CFLAGS) structur.cpp -o structur

assgn_st : assgn_st.cpp
	$(CPP) $(CFLAGS) assgn_st.cpp -o assgn_st

arrstruc : arrstruc.cpp
	$(CPP) $(CFLAGS) arrstruc.cpp -o arrstruc

address : address.cpp
	$(CPP) $(CFLAGS) address.cpp -o address

pointer : pointer.cpp
	$(CPP) $(CFLAGS) pointer.cpp -o pointer

init_ptr : init_ptr.cpp
	$(CPP) $(CFLAGS) init_ptr.cpp -o init_ptr

use_new : use_new.cpp
	$(CPP) $(CFLAGS) use_new.cpp -o use_new

arraynew : arraynew.cpp
	$(CPP) $(CFLAGS) arraynew.cpp -o arraynew

addpntrs : addpntrs.cpp
	$(CPP) $(CFLAGS) addpntrs.cpp -o addpntrs

ptrstr : ptrstr.cpp
	$(CPP) $(CFLAGS) ptrstr.cpp -o ptrstr

newstrct : newstrct.cpp
	$(CPP) $(CFLAGS) newstrct.cpp -o newstrct

delete : delete.cpp
	$(CPP) $(CFLAGS) delete.cpp -o delete

mixtypes : mixtypes.cpp
	$(CPP) $(CFLAGS) mixtypes.cpp -o mixtypes -std=c++0x

choices : choices.cpp
	$(CPP) $(CFLAGS) choices.cpp -o choices -std=c++0x

all : $(PROGS)

clean:
	rm -rf $(PROGS) $(MACDIRS) $(WINFILES)
