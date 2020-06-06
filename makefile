.SUFFIXES = .c .o
OBJECTS = register.o print.o search.o delete.o sort.o hw6Main.o
CC = gcc
CFLAGS = -Wall -g
TARGET = hw

hw : $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

%.o : %.c
	$(CC) -c -o $@ $(CFLAGS) $<

clean:
	rm -f $(OBJECTS) $(TARGET)

