// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

vector<int> countDown(int n ){
    vector<int> v;
    for (int i = n; i >= 0; i -= 1){
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
        else cout << " " << el ;
    }
    cout << "\n";
    
}

int main() {
    printIt(countDown(5));
    printIt(countDown(0));
    printIt(countDown(4));
    printIt(countDown(1));
  
   return 0;
}
