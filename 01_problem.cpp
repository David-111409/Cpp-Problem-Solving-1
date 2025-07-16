#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int ar[26] = {0};
    
    string str;
    cin >> str;
    
    for (char ch : str){
        if (ch >= 'a' && ch <= 'z'){
            ++ar[ch - 'a'];
        }
    }
    
    for (int i = 0; i < 26; ++i)
    {
        if (ar[i] > 0){
            cout << char(i+ 'a') << " " << ar[i] << "\n";
        }
    }
   
    
    return 0;
}
