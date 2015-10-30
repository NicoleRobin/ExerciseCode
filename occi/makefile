CC = g++
IOCCIDIR = -I/usr/include/oracle/11.2/client64
LOCCIDIR = -L/usr/lib/oracle/11.2/client64/lib
FLAG = $(IOCCIDIR) $(LOCCIDIR) $(DEBUGFLAG)

testOcci:testOcci.cpp
	$(CC) -o $@ $< $(FLAG) -locci -lsqlplus -lrt

.PHONY:clean
clean:
	rm -rf testOcci *.o
