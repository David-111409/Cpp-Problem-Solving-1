#include <iostream>
#include<vector>
using namespace std;

int search(vector<int> ar, int el){
    int indx = -1;
    
    for (int i = 0 ; i < ar.size() ; i++)
    {
        if (ar[i] == el) {
            indx = i; 
            break;
        }
    }
    
    return indx;
}

int main() {
    
   cout << search({1, 2, 3,}, 3) << endl;
   cout << search({1, 9, 9}, 9) << endl;
   cout << search({1, 2, 3}, 4) << endl;
   cout << search({6, 8, 3}, 3);
   
   return 0;
}
