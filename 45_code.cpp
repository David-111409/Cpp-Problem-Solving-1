#include <iostream>
using namespace std;
int main() {
    // int n;
    // cin >> n;
    // int i = 3;
    // while (i <= n){
        
    //     cout << i << " " ;
    //     i += 3;
    // }
    // int x, y;
    // cin >> x >> y;
    // int res = 1;
    // while (y){
    //     res *= x;
    //     y--;
    // }
    // cout << res;
    
    // int n, count = 0;
    // cin >> n;
    // int original = n;
    // if (n == 0){
    //     cout << 1 << " digit";
    // }
    // else if (n == -2147483648){
    //     cout << "neg\n";
    //     cout << "10 digits of number:" << n;
    // }
    // else {
        
    // if (n < 0){
    //     cout << "neg" << endl;
    //     n = n * -1;
    // }
    // else {
    //     cout << "pos" << endl ;
    // }
        
    // while(n){
    //     count++;
    //     // cout << n << endl;
    //     n = n / 10;
    // }
    // cout << count << " digits of number:" << original ;
    // }
    int tr ;
    cin >> tr;
    
    while (tr){
        int n;
        cin >> n;
        cout << "sum from 1 to " << n << " = " << n * (n + 1) /2 << endl;
        
        tr--;
    }
    return 0;
}
