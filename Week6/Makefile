### --- Environmental Variables --- ###

# Compiler/Linker env vars
CC=g++
CFLAGS=-I$(INCDIR)
#TESTFLAGS=-DUNITTEST
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
all:  $(BINDIR)/stack-main  $(BINDIR)/inout-main  $(BINDIR)/stack-tester

# Make these individually so that we don't run into ambiguous main issues
$(BINDIR)/stack-main: $(OBJDIR)/stack-main.o $(OBJDIR)/simplestack.o $(OBJDIR)/node.o
	$(LINKER) -o $@ $(LDFLAGS)  $^

$(BINDIR)/inout-main: $(OBJDIR)/inout-main.o
	$(LINKER) -o $@ $(LDFLAGS)  $^


# Unit testing binaries ...
$(BINDIR)/stack-tester: $(OBJDIR)/simplestack.o $(OBJDIR)/node.o
	$(CC) $(CFLAGS) -DUNITTEST -o $@   $(SRCDIR)/simplestack.cc  $(OBJDIR)/node.o


# For every object file in the object file set,
# compile the related cc file
$(OBJECTS):	$(OBJDIR)/%.o : $(SRCDIR)/%.cc
	$(CC) $(CFLAGS)  -o $@  -c $<


# Used to make documentation via Doxygen
.PHONY: docs
docs:
	doxygen doxygen.cfg

# Use ".PHONY" so we don't confuse with a target named "clean"
.PHONY:	clean
clean:
	rm -f $(OBJECTS)
	rm -f $(BINDIR)/*
