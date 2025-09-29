#include<iostream>
using namespace std;


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

// another file
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
