#include "bignum.hpp"

// "Supreme excellence consists of breaking the enemy's resistance without fighting."" -- Sun Tzu, The Art of War
int main(int argc, char **argv) {
  if (argc == 2 && std::string(argv[1]) == "--version") {
    std::cout << bignum::kName << std::endl;
  } else if (argc == 2) {
    std::cout << bignum::Convert(std::string(argv[1])) << std::endl;
  } else {
    std::cout << "> bignum [NUM] / --version" << std::endl;
  }

  return EXIT_SUCCESS;
}
