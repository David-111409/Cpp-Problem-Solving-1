#include<iostream>
using namespace std;

bool double_letters(string word){
    int l = word.length();

    for (int i = 0; i < l; i++)
        if (word[i] == word[i+1]) return true;
    
    return false;
}

int main(){
   cout << boolalpha;
   cout << double_letters("loop") << endl;
   cout << double_letters("yummy") << endl;
   cout << double_letters("orange") << endl;
   cout << double_letters("munchkin") << endl;
   cout << double_letters("meeting") << endl;
   cout << double_letters("moo") << endl;
   cout << double_letters("hello") << endl;
}
