#include<iostream>
using namespace std;

// file #1

int main() {
int x = 12;
int y = 40;
// int temp = x;
// x = y;
// y = temp;
// swap(x, y);
// cout << x << endl;
// cout << y << endl;  
// y = x + y;
// x = y - x;
// y = y - x;
y = x ^ y;
x = y ^ x;
y = y ^ x;
cout << "x = " << x << endl;
cout << "y = " << y << endl;
}

// file #2

// #include<iostream>
// using namespace std;

// void mySwap(int &x, int &y){
//     int z = x ;
//     x = y;
//     y = z;
// }
// int main() {
//     int a = 3, b = 22;
//     cout << "before swapping:\n" ;
//     cout <<"a = " << a ;
//     cout << ", b = " << b << endl;
//     mySwap(a, b);

//     cout <<"after swapping:\n" ;
//     cout <<"a = " << a ;
//     cout << ", b = " << b << endl;
    
//     return 0;
// }

// file #3

// #include<iostream>
// using namespace std;
// void checkType(){
//     cout << "Enter any char:\n" ;
//     char c;
//     cin >> c;
//     cout << "you entered : " << c;
//     if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ){
//         cout << " which is an alphabet" ;
//     }
//     else if (c >= '0' && c <= '9'){
//         cout << " which is a digit";
//     }
//     else {
//         cout << " which is a special";
//     }
// }

// int main() {
//     checkType();
//     return 0;
// }
