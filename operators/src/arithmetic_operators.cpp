// Arithmetic operatore: +, -, *, /, %
#include <iostream>
using namespace std;

// Application entry point
int main() {

  // evaluate operations and store results
  int a = 3 + 5;
  int b = 3 - 5;
  int c = 3 * 5;
  double d = 3.0 / 5.0;
  int e = 5 % 3;

  // display results
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;
  cout << "e = " << e << endl;

  // terminate programme
  return 0;
}