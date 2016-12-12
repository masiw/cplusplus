// increment, decrement
#include <iostream>
using namespace std;

// Application entry point
int main() {
  // initialize x to 0
  double x = 0.0;

  cout << "x -> " << x << endl;  // display starting point
  cout << "x++ -> " << x++ << endl; // execute and display post increment
  cout << "x-- -> " << x-- << endl; // execute and display post decrement
  cout << "++x -> " << ++x << endl; // execute and display pre increment
  cout << "--x -> " << --x << endl; // execute and display pre decremenet
  
  // terminate application
  return 0;
}