#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int findDifference(vector<int> first, vector<int> sec){
    int v1 = first[0] * first[1] * first[2];
    int v2 = sec[0] * sec[1] * sec[2];
  
    return abs(v1 - v2);
}

int main() {
    
   cout << findDifference({2, 2, 3}, {1, 4, 5}) << endl;
   cout << findDifference({ 28, 16, 29 }, { 7, 8, 17}) << endl;
   cout << findDifference({1, 9, 25}, {7, 9, 10});
  
   return 0;
}
