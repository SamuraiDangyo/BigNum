CXX=clang++
CXXFLAGS=-O2 -Wall -pedantic -Wextra -DNDEBUG

all:
	$(CXX) $(CXXFLAGS) main.cpp -o bignum

.PHONY: all
