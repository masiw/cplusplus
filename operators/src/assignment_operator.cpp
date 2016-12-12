// assignment operator
#include <iostream>
using namespace std;

int main() {
  int a,b;    //declare a and b
  a = 10;     // instantiate a to 10
  b = 4;      // instantiate b to 4
  a = b;      // instantiate a to b
  b = 7;      // intantiate b to 7

  // display results
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  // terminate programme
  return 0;
}