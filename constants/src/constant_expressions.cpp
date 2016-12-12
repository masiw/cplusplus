// Constant expressions
#include <iostream>
using namespace std;

// declare value of pi
const double pi = 3.1415926;

// declare newline character value
const char newline = '\n';

// Application entry point
int main() {
  double radius = 5;  // declare radius to 5
  double circumference;  // declare circle circumference

  circumference = 2 * pi * radius;  // calculate circumference

  // display result
  cout << circumference << newline;

  // terminate programme
  return 0;
}