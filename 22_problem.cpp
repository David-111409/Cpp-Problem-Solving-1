#include <iostream>
#include<cmath>
using namespace std;

bool isNarcissistic(int n){
    int l = to_string(n).size();
    int k = n;
    int sum = 0;
    while(n > 0){
        sum += pow(n % 10 , l) ;
        n = n / 10;
    }
    return k == sum;
}

int main() {
  cout << boolalpha;
  cout << isNarcissistic(153) << endl;
  cout << isNarcissistic(370) << endl;
  cout << isNarcissistic(1652) << endl;
  cout << isNarcissistic(371) << endl;
  cout << isNarcissistic(2124);
  
  return 0;
}
