#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;
    
    int len = word.length();
    
    cout << word[0];
    for(int i = 1; i < len; ++i){
        if (word[i] == word[i-1]){
            cout << word[i];
        }
        else {
            cout << " " << word[i];
        }
    }
    
    return 0;
}
