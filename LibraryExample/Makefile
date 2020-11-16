### --- Environmental Variables --- ###

LIBRARY=libcomplex.a

# Compiler/Linker env vars
CC=g++
LD=ar

CFLAGS=-I$(INCDIR)

LDFLAGS=-lcomplex -L$(LIBDIR)
LIBFLAGS=rvs
LINKER=g++

# Make env vars for the different directories we will use
OBJDIR=./obj
SRCDIR=./src
INCDIR=./inc
BINDIR=./bin
LIBDIR=./lib

# Create file groups for each directory
SOURCES  := $(wildcard $(SRCDIR)/*.cc)
INCLUDES := $(wildcard $(SRCDIR)/*.h)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.cc=$(OBJDIR)/%.o)
# ^^ i.e., a .o file in OBJDIR for every .cc file in SRCDIR


### --- Build Target Rules --- ###

.PHONY: all
all:  $(BINDIR)/testprogram  $(LIBDIR)/$(LIBRARY)


# For the target program, link all objects into executable
$(BINDIR)/testprogram:	$(OBJDIR)/testprogram.o $(LIBDIR)/$(LIBRARY)
	$(LINKER) -o $@  $(OBJDIR)/testprogram.o $(LDFLAGS)

# Compile and archive the library
$(LIBDIR)/$(LIBRARY):	$(OBJDIR)/Complex.o
	$(LD) $(LIBFLAGS) $@ $<

# For every object file in the object file set,
# compile the related cc file
$(OBJECTS):	$(OBJDIR)/%.o : $(SRCDIR)/%.cc
	$(CC) $(CFLAGS)  -o $@  -c $<


# Use ".PHONY" so we don't confuse with a target named "clean"
.PHONY:	clean
clean:
	rm -f $(OBJECTS)
	rm -f $(BINDIR)/testprogram
	rm -f $(LIBDIR)/lib*.a
