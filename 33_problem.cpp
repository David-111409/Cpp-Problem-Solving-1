#include <iostream>
using namespace std;

vector<int> sumOddAndEven(const vector<int> &v){
  
  int even = 0;
  int odd = 0;

  for (int el : v){
    if (el % 2 ) odd += el;
    else even += el;
  }

  return {even, odd};
}

void print(const vector<int> &ve){
  cout << "[ " << ve[0] << ", " << ve[1]   << " ]"  << endl ;
}


int main() {
    print(sumOddAndEven(vector<int> {1, 2 ,3, 4, 5, 6}));
    print(sumOddAndEven(vector<int> {-1, -2 ,-3, -4, -5, -6}));
    print(sumOddAndEven(vector<int> {0, 0}));
    print(sumOddAndEven(vector<int> {}));

    return 0;
}
