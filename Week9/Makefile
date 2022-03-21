### --- Environmental Variables --- ###


PROGRAMS=shapetester

# Compiler/Linker env vars
CC=g++

CFLAGS=-I$(INCDIR)

LDFLAGS=
LINKER=g++

# Make env vars for the different directories we will use
OBJDIR=./obj
SRCDIR=./src
INCDIR=./inc
BINDIR=./bin

# Create file groups for each directory
SOURCES  := $(wildcard $(SRCDIR)/*.cc)
INCLUDES := $(wildcard $(INCDIR)/*.h)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.cc=$(OBJDIR)/%.o)
# ^^ i.e., a .o file in OBJDIR for every .cc file in SRCDIR


### --- Build Target Rules --- ###

.PHONY: all
all:  $(BINDIR)/$(PROGRAMS)  $(BINDIR)/$(TESTS)


# For the target program, link all objects into executable
$(BINDIR)/$(PROGRAMS):	$(OBJECTS)
	$(LINKER) -o $@  $(OBJECTS) $(LDFLAGS)

# For every object file in the object file set,
# compile the related cc file
$(OBJECTS):	$(OBJDIR)/%.o : $(SRCDIR)/%.cc
	$(CC) $(CFLAGS)  -o $@  -c $<


# Use ".PHONY" so we don't confuse with a target named "clean"
.PHONY:	clean
clean:
	rm -f $(OBJECTS)
	rm -f $(BINDIR)/$(PROGRAMS)
