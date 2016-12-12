// Ternary operator
#include <iostream>
using namespace std;

// Application entry point
int main() {
  // declare variables
  int a, b, c;

  // initialize variables
  a = 2;
  b = 7;

  // display variable values
  cout << "a -> " << a << endl;
  cout << "b -> " << b << endl;

  // evaluate c
  c = (a < b) ? a : b;

  // display c evaluation
  cout << "c = (a < b) ? a : b -> " << c << endl;

  // terminate application
  return 0;
}