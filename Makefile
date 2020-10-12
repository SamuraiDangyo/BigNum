# Definitions (-fsanitize=undefined,alignment,bounds,shift)

CC=clang++
CCFLAGS=-O2 -Wall -pedantic -Wextra -DNDEBUG
NAME=main.cpp
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
