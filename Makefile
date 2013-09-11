.PHONY: clean

CC=clang
CFLAGS=-I. -g -Wall
OBJS=lab03.o main.o
DEPS=lab03.h
TARGET=lab03

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $^ $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS) *~

%.o: %.c $(DEPS)
	$(CC) -c $< $(CFLAGS) 
