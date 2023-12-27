#include <iostream>
using namespace std;

int main() {

  int a, result, remainder;

  cout << "Enter an integer: ";
  cin >> a;

  while(a != 0) 
  {
    remainder = a % 10;
    result = result * 10 + remainder;
    a = a/10;
  }

  cout << "Reversed Number = " << result;

  return 0;
}