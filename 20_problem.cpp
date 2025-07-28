#include <iostream>
#include<vector>
using namespace std;

vector<int> findEvenNums(int n ){
    vector<int> v;
    for (int i = 2; i <= n; i += 2){
        v.push_back(i);
    }
    return v;
    
}
void printIt(vector<int> input){
    int f = 0;
    for (int el : input){
        if (!f){
            cout << el;
            f = 1;
        }
        else 
          cout << " " << el ;
    }
    
}

int main() {
    printIt(findEvenNums(22));
  
   return 0;
}
