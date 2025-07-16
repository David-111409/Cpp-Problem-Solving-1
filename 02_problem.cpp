#include <iostream>
#include <string>
using namespace std;

int main() {
    string word ;
    cin >> word ;
    
    string nums =    "0123456789";
    string nums_to = "!@#$%^&*()";
    string from = "abcdefghijklmnopqrstuvwxyz";
    string to =   "YZIMNESTODUAPWXHQFBRJKCGVL";
    
    for (int i = 0; i < word.length(); i++){
        if (word[i] >= 'a' && word[i] <= 'z'){
             word[i] = to[word[i]- 'a'] ;
        }
        else if( word[i] >= '0' && word[i] <= '9') {
            word[i] = nums_to[word[i] - '0'] ;
        }
    }
  
    cout << word;
    
    return 0;
}
