#include <iostream>
#include<algorithm>
using namespace std;

bool oneOddOneEven(int n){
  string string_n = to_string(n);
  int first = (string_n[0] - '0') % 2;
  int second = (string_n[1] - '0') % 2;
  return first != second;

}
int main() {
    
    
  // int a = 20;
  // int *p = &a;
  // *p = 10;
  // *p = 5;
  // cout << *p << endl;
  // cout << p << endl;

  // char k = 'k';
  // cout << k << endl;
  // char  *c = &k;
  // *c = 'f';
  // cout << static_cast<void *>(c) << endl;
  // cout << static_cast<void *>(&k) << endl;
  // int x = 21;
  // string k = to_string(x) ;
  // int first = (k[0] - '0') % 2 == 0;
  // int second = (k[1] - '0') % 2 == 0;
  // cout << (first != second) << endl;
  cout << boolalpha;
  cout << oneOddOneEven(21) << endl;
  cout << oneOddOneEven(22) << endl;
  cout << oneOddOneEven(11) << endl;


  return 0;
}
