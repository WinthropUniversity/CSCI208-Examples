### --- Environmental Variables --- ###

# Compiler/Linker env vars
CC=g++

CFLAGS=-I$(INCDIR) -g

LDFLAGS=-ggdb


### --- Build Target Rules --- ###

.PHONY: all
all:  badcode

mandelbrot: badcode.cc
	$(CC) $(CFLAGS) -o $@   $<   $(LDFLAGS)

# Use ".PHONY" so we don't confuse with a target named "clean"
.PHONY:	clean
clean:
	rm -f badcode
	rm -rf *.dSYM
