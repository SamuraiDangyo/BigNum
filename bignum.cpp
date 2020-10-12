// Headers

#include "bignum.hpp"

// "Supreme excellence consists of breaking the enemy's resistance without fighting."" -- Sun Tzu, The Art of War

int main(int argc, char **argv) {
  if (argc > 1) bignum::Convert(std::string(argv[1])); else bignum::PrintHelp();
  return EXIT_SUCCESS;
}
