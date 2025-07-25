#include <iostream>
#include<vector>
using namespace std;

vector<int> additiveInverse(vector<int> ve){
    for (int &el: ve){
        el *= -1;
    }
    return ve;
}

void printVe(vector<int> v){
    for (int el : v){
        cout << el << " " ;
    }
    cout << endl;
}

int main() {
     printVe(additiveInverse({1, 2, 3, -10, 2, -20 , 100}));

    return 0;
}
