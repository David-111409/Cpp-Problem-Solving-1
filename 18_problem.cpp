#include <iostream>
#include<vector>
using namespace std;

bool isOrthogonal(const vector<int>&fv, const vector<int>&sv){
    int l = fv.size();
    int sum = 0;
  
    for (int i = 0; i < l; i++){
        sum += fv[i] * sv[i];
    }
  
    return sum == 0;
}

int main() {
    
   cout << boolalpha;
  
   cout << isOrthogonal({1, 2}, {-2, 1}) << "\n";
   cout << isOrthogonal({3, -1}, {7, 5}) << "\n";
   cout << isOrthogonal({1, 2, 0}, {2,  -1, 10}) << "\n";
   cout << isOrthogonal({2, 4, 1}, {2, 1, -8}) << "\n";
   return 0;
}
