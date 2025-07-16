#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1 ;
    string word2 ;
    
    cin >> word1;
    cin >> word2;
    
    int l1 = word1.length();
    int l2 = word2.length();
    int l_mx = l1 > l2 ? l1 : l2;
    
    for (int i = 0; i < l_mx; i++){
        if (i < l1)
            cout << word1[i];
        if (i < l2)
            cout << word2[i];
    } 
   
    
    return 0;
}
