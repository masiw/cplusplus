// Type deduction: auto and decltype
#include <iostream>
using namespace std;

int main() {
  int foo = 12;         // declare foo as int
  auto bar = foo;       // declare bar same as foo
  decltype(bar) result; // declare result same type as bar

  // calculate result
  result = foo + 2 * bar;

  // display result
  cout << result << endl;

  // terminate program
  return 0;
}