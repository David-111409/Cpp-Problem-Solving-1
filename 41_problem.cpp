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

/*
#include <iostream>
using namespace std;

int main() {
    // cout << "hello World for the first time with C++ We are trying to do it right" << endl;
    // cout << "We have gotten the right output" << endl;
    // cout << "Hager is the small sister" << endl;
    // for (int i = 0 ; i < 10 ; i++){
    //     cout <<"number: " << i << endl;
    // }
    // cout << "Good for the first and second program be flexible" << endl;
    // cout << "Hello wolrld" << endl;
    // int salary;
    // cin >> salary;
    // if(salary <1000){
    //     cout << "You are poor\n";

    // }
    // cout << "Salam"  << endl;
    // int x;
    // cin >> x;
    // if(x == 10){
    //     int y = 20;
    //     cout << y << " is the lucky number." << endl;
    // }
    // // cout << y << endl;
    // cout << x;
    // int val{10};
    // if (val < 20) {
    //     int val { 20 };
    //     cout << val << endl;
    // }
    // cout <<  val << endl;
    // int a , b;
    // cin >> a >> b;
    // // cout << a << endl;
    // // cout << b << endl;
    // int first_is_odd = a % 2;
    // int second_is_odd = b % 2;

    // if(first_is_odd && second_is_odd){
    //     int prod = a * b;
    //     cout << "Their prodcut : " << prod << endl;
    // }

    // else if (!first_is_odd && !second_is_odd){
    //     int div = a / b;
    //     cout << "Their division : " << div << endl;
    // }
    // else if (first_is_odd && !second_is_odd){
    //     int sum = a + b;
    //     cout << "Their sum : " << sum << endl;
    // }
    // else if (!first_is_odd && second_is_odd){
    //     int diff = a - b;
    //     cout << "Their difference : " << diff << endl;
    // }
    // float a {10.5} ;
    // if ((a = 10.5)){
    //     cout << a << endl;
    //     cout << "a is 10.5" << endl;
    // }
    // if ((a = 0)){
    //     cout << "a is 0" << endl;
    // }
    // // cout << a << endl;
    // int val {25};
    // if (val < 10); {
    //     cout << 1 ;
    // }
    // if (val < 20){
    //     cout << 2;
    // }
    // else {
    //     cout << 3;
    // }
    // if (int x =  11; x % 2 == 0){
    //     cout << x << " is even" << endl;
    // }
    // else {
    //     cout << x << " is odd" << endl;
    // }
    int a , b, c;
    cin >> a >> b >> c;
    if (a < b && b < c){
        cout << a << " " << b << " " << c;
    }
    else if (a < c && c < b){
        cout << a << " " << c << " " << b;
    }
    else if (b < a && a < c){
        cout << b << " " << a << " " << c;
    }
    else if (b < c && c < a){
        cout << b << " " << c << " " << a;
    }
    else if (c < a && a < b){
        cout << c << " " << a << " " << b;
    }
    else if (c < b && b < a){
        cout << c << " " << b << " " << a;
    }
    
    

    return 0;
}
*/
