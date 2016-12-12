// compount assignment operators
#include <iostream>
using namespace std;

// Application entry point
int main() {
  int a = 3;  // instantiate a to 3
  int b = 3;  // instantiate b to 3
  int c = 3;  // instantiate c to 3
  double d = 3.0;  // instantiate d to 3

  a += 2;   // add 2 to a
  b -= 2;   // subtract 2 from b
  c *= 2;   // multiply c by 2
  d /= 2;   // divide d by 2

  // display results
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;

  // terminate program
  return 0;
}