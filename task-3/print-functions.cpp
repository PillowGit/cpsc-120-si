// Note: We have to include the header in the source file so we know which
// function we are defining
#include "print-functions.hpp"

// Here's an example of defining a function that was declared in
// "print-functions.h"
int Perimeter(int length, int width) {
  int perimeter = length * 2 + width * 2;
  return perimeter;
}

// TODO:
// Write the definition for the function you declared in "print-functions.h"
