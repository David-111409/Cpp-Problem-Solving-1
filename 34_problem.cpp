#include <iostream>
using namespace std;

int main() {
  // int ar[3] = {1, 2 , 3};

  // cout << *ar << endl;
  // cout << ar + 1 << endl;
  // cout << &ar[1] << endl;
  // cout << * (ar + 1)  << " " << ar[1] << endl;
  int a = 12, b = 21;
  // swap(a, b);
  // a = a + b;
  // b = a - b;
  // a = a - b;
  a = a ^ b ;
  b = a ^ b;
  a = a ^ b;
  
  cout << a << endl << b ;
  // a = a + b;
  // b = a - b;
  // a = a - b;
  // cout << a << endl;
  // cout << b << endl;

  // a = a ^ b;
  // b = a ^ b;
  // a = a ^ b;
  // cout << a << endl;
  // cout << b << endl;

  return 0;
}
