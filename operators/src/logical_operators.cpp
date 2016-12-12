// logical operators
#include <iostream>
using namespace std;

// Application entry point
int main() {
  // display and truth table
  cout << "true && true -> " << (true && true) << endl;
  cout << "true && false -> " << (true && false) << endl;
  cout << "false && true -> " << (false && true) << endl;
  cout << "false && false -> " << (false && false) << endl;

  // display or truth table
  cout << "true || true -> " << (true || true) << endl;
  cout << "true || false -> " << (true || false) << endl;
  cout << "false || true -> " << (false || true) << endl;
  cout << "false || false -> " << (false || false) << endl;

  // display not truth table
  cout << "!true -> " << (!true) << endl;
  cout << "!false -> " << (!false) << endl;

  // terminate application
  return 0;
}