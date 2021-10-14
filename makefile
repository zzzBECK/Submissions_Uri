CC=gcc
CFLAGS=-std=c99 -O2 -lm -w

objects=$(shell ls | grep -E "[0-9]+.c" | tr -d '.c' | tr '\n' ' ')

all: $(objects)

$(objects): %: %.c
	$(CC) -o $@ $< $(CFLAGS)

clean: 
	rm -f $(objects) 
