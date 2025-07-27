#include <iostream>
#include<vector>
using namespace std;

vector<int> mu(vector<int>v){
    int l = v.size();
    for (int &el: v){
        el = el * l;
    }
    return v;
}
void printVector(vector<int> v){
    for (int &el : mu(v)){
        cout << el << " ";
    }
    cout << endl;
}
int main() {
    
   printVector({2, 3, 1, 0});
   printVector({4, 1, 1});
   printVector({1, 0, 3, 3, 7, 2, 1});
   return 0;
}
