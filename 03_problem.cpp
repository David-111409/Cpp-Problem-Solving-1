#include <iostream>
#include <string>
using namespace std;

int main() {
  
    string big, small ;

    cin >> big >> small;
    
    int len = small.length();
    
    if (len > big.length()) {
        cout << "NO";
        return 0;
    }
    
    int value = 1;
    
    for (int i = 0; i < len; ++i){
        if (small[i] != big[i]){
            value = 0;
            break;
            
        }
    }
    
    // if (value) cout << "YES";
    // else cout << "NO";
    
    cout << (value ? "YES" : "NO");
    
    return 0;
}
