#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int findSmallestNum(vector<int> ar){
    int small = ar[0];
    
    for (int el: ar){
        if (el < small)
            small = el;
    }
    
    return small;
}

int main() {
    
    cout << findSmallestNum({34, 15, 88, 2}) << endl;
    cout << findSmallestNum({34, -345, -1, 100}) << endl;
    cout << findSmallestNum({0, 1, 2, 3, 4, 5}) << endl;
    cout << findSmallestNum({2, 3, 1, 100, 500, -1, -100});

    return 0;
}
