all:myapps
CC=gcc
CFLAGS= -std=c11 -00 -Wall -g
INCLUDES=.
LIBS= -lc
OBJS= driver.o prog1.o prog2.o prog3.o prog4.o 
INSTDIR= /usr/local/bin
myapps: $(OBJS)
	$(CC) $(OBJS) -o $(LIBS)
driver.o: driver.c header.h
	$(CC) -c -I$(INCLUDES) driver.c $(CFLAGS)
prog1.o:prog1.c
	$(CC) -c prog1.c $(CFLAGS)
prog2.o:prog2.c
	$(CC) -c prog2.c $(CFLAGS)
prog3.o=prog3.c
	$(CC) -c prog3.c $(CFLAGS)
prog4.o=prog4.c
	$(CC) -c prog4.c $(CFLAGS)
include: ../Problem3/makefile
clean:
	-@rm -f $(OBJS)
