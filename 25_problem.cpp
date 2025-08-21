#include<iostream>
using namespace std;
// int sum ( int x = 0, int y = 0){
//     cout << "Enter two numbers:" << endl;
//     cin >> x >> y;
//     return x + y;
// }
// double avg(double m, double f, double k){
//     return (m + f + k) / 3.;
// }
// int max (int n1, int n2, int n3){
//     int mx = n1;
//     if (n2 > mx){
//         mx = n2;
//     }
//     if (n3 > mx){
//         mx = n3;
//     }
//     return mx;
// }
// void p(int &x, int &y){
//     x++;
//     y++;
// }

// int d(int &x, int &y){
//     x ++;
//     y ++;
//     return y;
// }
int main(){
    // int x = 0, y = 0;
    // int s = sum(x, y);
    // cout << s << endl;
    // double m = 0, f = 0, k = 0;
    // cout << "Enter 3 numbers: " << "\n";
    // cin >> m >> f >> k;
    // cout << avg(m, f , k) << "\n";
    // cout << max(55, 22, 200) << endl;
    // cout << max(100, 20, 800) << endl;
    // int x = 1;
    // int y = 2;
    // p(x, y);
    // p(x, y);
    // cout << x << endl << y;
    // int m = 0, n = 0;
    // cout << d(m, n) << endl;
    // cout << m << endl << n;
    // int x = 1, y = 2;
    // y = x + y;
    // x = y -x;
    // y = y -x;
    // int t;
    // t = x;
    // x = y;
    // y = t;
    // y = x ^ y;
    // x = y ^ x;
    // y = y ^ x;
    // cout << x << endl;
    // cout << y << endl;

    // int ar[50];
    // ar[0] = 15;
    // ar[1] = 20;
    // ar[2] = 30;
    // cout << ar[0] << endl;
    // cout << ar[1] << endl;
    // cout << ar[2] << endl;
    // int ar[4] = {};
    // for (int i = 0; i < 4; i++){
    //     cout << ar[i] << endl;
    // }
    int sum = 0;
    int ar[7];
    for (int i = 0; i < 7; i++){
        cin >> ar[i];
    }
    
    for (int i = 0; i < 7; i++){
        sum += ar[i];
    }
    cout << sum;
}
