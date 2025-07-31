#include <iostream>
#include<cmath>

int sumDigit(int c){
        int sum = 0;
        while(c){
            sum += c % 10;
            c = c / 10;
        }
        return sum;
    }
int mubashirFunction(int a, int b){
    return  sumDigit(a)  * sumDigit(b) ;
}

int main() {
  cout <<  mubashirFunction(1, 302) << "\n";
  cout << mubashirFunction(123, 45) << "\n";
  cout << mubashirFunction(22, 20) << "\n";
  cout << mubashirFunction(0, 12) << "\n";
   return 0;
}
