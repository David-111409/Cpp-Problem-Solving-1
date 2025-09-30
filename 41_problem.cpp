#include<iostream>
using namespace std;

void reverseString(){
    cout << "Enter any string:\n" ;
    string c, rev;
    cin >> c;
    int l = c.length() - 1;
    for (int i = l ; i >= 0; i--) rev += c[i];
    cout << rev << endl;
}
string isAlpha(){
    cout  << "Enter any character: ";
    char c;
    cin >> c;
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        return "alphabet";
    }else {
        return "Not alphabet";
    }
}
int main() {
    // reverseString() << endl;
    cout << isAlpha() << endl;
    return 0;
}
