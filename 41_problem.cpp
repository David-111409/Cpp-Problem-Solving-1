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

// file #2

#include<iostream>
using namespace std;

bool isLeap(int year){
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
int main() {
    cout << "Enter a year: " << endl;
    int y;
    cin >> y;
    cout << y  << " " ;
    cout << (isLeap(y)? "is a leap year" : "is not a leap year") << endl;
    return 0;
}
