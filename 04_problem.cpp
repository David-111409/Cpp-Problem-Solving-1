#include <iostream>
#include <string>
using namespace std;

int main() {
    string big ;
    string small ;
    cin >> big >> small;
    int len_small = small.length();
    int len_big = big.length();
    
    if (len_small > len_big){
        cout << "NO";
        return 0;
    }
    
    int v = true;
    
    for (int i = 0; i < len_small; ++i) 
        if( small[len_small - i - 1] != big[len_big-i-1])
        {
            v = false;
            break;
        }
        
    cout << (v ? "YES" : "NO");
    
    
    return 0;
}
