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
