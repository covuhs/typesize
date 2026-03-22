#include <iostream>

namespace Sizing {
int x; // x is an object of type int
long y;
short z;
float sg_precision;
double db_precision;
long double ext_precision;
void displaySizeInteger();
void displaySizeReference();
void displaySizeFloating();
}; // namespace Sizing

void Sizing::displaySizeInteger() {
  std::cout << "Size of int: " << sizeof(x) << std::endl;
  std::cout << "Size of long: " << sizeof(y) << std::endl;
  std::cout << "Size of short: " << sizeof(z) << std::endl;
}

void Sizing::displaySizeReference() {
  std::cout << "Size of reference to int: " << sizeof(&x) << std::endl;
  std::cout << "Size of reference to long: " << sizeof(&y) << std::endl;
  std::cout << "Size of reference to short: " << sizeof(&z) << std::endl;
}

void Sizing::displaySizeFloating() {
  std::cout << "Size of single precision floating point number: "
            << sizeof(sg_precision) << std::endl;
  std::cout << "Size of double precision floating point number: "
            << sizeof(db_precision) << std::endl;
  std::cout << "Size of extended precision floating point number: "
            << sizeof(ext_precision) << std::endl;
}

int main(int argc, char *argv[]) {

  // CLI

  if (argc == 1)
    std::cout << "usage: typesize [-ifr]" << std::endl;

  if (argc > 1) {
    if (strcmp(argv[1], "-i") == 0)
      Sizing::displaySizeInteger();
    else if (strcmp(argv[1], "-f") == 0)
      Sizing::displaySizeFloating();
    else if (strcmp(argv[1], "-r") == 0)
      Sizing::displaySizeReference();
    else
      std::cout << "usage: typesize [-ifr]" << std::endl;
  }
}
