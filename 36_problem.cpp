#include <iostream>
using namespace std;


// void recur(int n){
//   if (n < 1) return ;
//   else 
//   cout << "num : " << n << endl;

//   return recur(n - 1);
// }
// int fib(int n){
//   if (n <= 1) return n;
//   return fib(n -1) + fib(n - 2);
// }
string rec_or_sq(int h , int w){
  if (h != w) return "Rectangle";
  else return "Square";
}
int main() {
// recur(5);
// cout << fib(8) << endl;

// stack<int> nums;
// cout << nums.empty() << endl;
  int t ;
  cin >> t;
  int h, w;
  while(t--){
    cin >> h >> w;
    cout << rec_or_sq(h, w) << endl;
  }
  return 0;
}
