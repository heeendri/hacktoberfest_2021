#include <iostream>
using namespace std;

int main() {
  int x;

  cout << "Enter a number = ";
  cin >> x;

  if ( x % 2 == 0)
    cout << x << " << even number";
  else
    cout << x << " << odd number";

  return 0;
}
