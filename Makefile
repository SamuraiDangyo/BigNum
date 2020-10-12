# Definitions (-fsanitize=undefined,alignment,bounds,shift)

CC=g++
CCFLAGS=-O2 -Wall -pedantic -Wextra -DNDEBUG
NAME=bignum.cpp
EXE=bignum
INSTALLDIR=/usr/bin/

# Targets

all:
	$(CC) $(CCFLAGS) $(NAME) -o $(EXE)

strip:
	strip ./$(EXE)

clean:
	rm -f $(EXE)*

.PHONY: all strip clean
