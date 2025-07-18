#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;
    
    int len = word.length();
    
    int count = 1;
    char current = word[0];
    
    for (int i = 1; i < len ; ++i){
        if (word[i] == current){
            ++count;
        }
        else{
            cout << current  << count << "_";
            current = word[i];
            count = 1;
        }
    }
    
    cout << current  << count ;
    
    return 0;
}
