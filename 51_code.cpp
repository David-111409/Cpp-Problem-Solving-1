#include <iostream>
using namespace std;

int length_3n_plus_1(int n){
    if(n == 1) return 1;
  
    if (n % 2) return 1 + length_3n_plus_1(n * 3 + 1);
  
    return 1 + length_3n_plus_1( n / 2 );
}

int my_pow(int value, int p = 2){
    if (p == 0) return 1;
  
    return value * my_pow(value, p - 1);
}

int main()
{
    cout << length_3n_plus_1(7) << endl;
    cout << length_3n_plus_1(6) << endl;
    
    cout << my_pow(3) << endl;
    cout << my_pow(3, 3) << endl;
    cout << my_pow(7, 3) << endl;
    cout << my_pow(3, 0) << endl;
    cout << my_pow(3, 1) << endl;
    cout << my_pow(7) << endl;

    return 0;
}
