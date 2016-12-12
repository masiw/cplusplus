// Relational and comparison operators
#include <iostream>
using namespace std;

// Application entry point
int main() {
  // display evaluations
  cout << "7 == 5 -> " << (7 == 5) << endl;
  cout << "5 == 5 -> " << (5 == 5) << endl;
  cout << "7 > 5 -> " << (7 > 5) << endl;
  cout << "7 != 5 -> " << (7 != 5) << endl;
  cout << "7 >= 7 -> " << (7 >= 7) << endl;
  cout << "7 < 7 -> " << (7 >= 7) << endl;

  //declare a, b, c
  int a = 1, b = 2, c = 3;

  // display intializations
  cout << "a -> " << a << endl;
  cout << "b -> " << b << endl;
  cout << "c -> " << c << endl;

  // display evaluations
  cout << "a*b >= c -> " << (a*b >= c) << endl;
  cout << "a+1 == b -> " << (a+1 == b) << endl;
  cout << "b=3 == c -> " << (b=3 == c) << endl;

  // terminate Application
  return 0;
}