#include <iostream>
#include<vector>
using namespace std;

// inline void f(int n){

//   if (!n) return ;
//   f(n / 10); 
//   cout << n % 10 << endl;
//   // f(n / 10);

// }
// binaryToDecimal([1, 1, 1, 1, 1, 1, 1, 1]) ➞ 255
int binaryToDecimal(/*int ar[]*/ const  vector<int>&vec ){
  int integer = 0;
  int size = vec.size();

  // for (int i = 0; i < 8; i++)
  //   integer += pow(2, 7 - i) * ar[i];
  for (int i = 0; i < size; i++){
    integer += /*pow(2, 7 - i)*/ (1 << (7 - i)) * vec[i];
  }
  return integer;

}
int main() {
  // f(123);
  /*Describe(binaryToDecimal_) {
	It(test1){Assert::That(binaryToDecimal({}), Equals(255));}
	It(test2){Assert::That(binaryToDecimal({0, 0, 0, 0, 0, 0, 0, 0}), Equals(0));}
	It(test3){Assert::That(binaryToDecimal({}), Equals(188));}
	It(test4){Assert::That(binaryToDecimal({}), Equals(181));}
}; */
  // int ar[] = {1, 1, 1, 1, 1, 1, 1, 1};
  // cout << binaryToDecimal(ar);
  cout << binaryToDecimal(vector<int>{1, 1, 1, 1, 1, 1, 1, 1});
  return 0;
}
