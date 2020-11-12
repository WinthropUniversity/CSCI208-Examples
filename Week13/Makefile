# Compiler/Linker env vars
CC=g++

# Create file groups for each directory
SOURCES  := $(wildcard *.cc)
TARGETS  := $(SOURCES:%.cc=%)


.PHONY: all
all: $(TARGETS)

# Make a binary target for every source file
$(TARGETS):	% : %.cc
	$(CC)  -o $@  $<


# Use ".PHONY" so we don't confuse with a target named "clean"
.PHONY:	clean
clean:
	rm -f $(TARGETS)
