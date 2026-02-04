#include <iostream>
using namespace std;
int main()
{
    // int i = 201;
    // // cin >> i;
    // int n;
    // cin >>n;
    // int count[i]{1};
    
    // int ar[i] = {0, 1};
    
    // for (int j = 1; j < 201; j++){
    //     int cur1 = ar[j-1] + j ;
    //     int cur2 = ar[j-1] - j;
    //     if (count[cur2]  || cur2 <= 0){
    //         ar[j] = cur1;
    //         count[cur1] = 1;
    //     }
    //     else {
    //         ar[j] = cur2;
    //     }
    // }
    
    
   
    //     cout << ar[n] << endl ;
    // for (int k = 0; k < 201; k++){
    // }
    // cout << "hello";
    
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++){
    //     int total = 0;
    //     int m;
    //     cin >> m;
    //     int p = 0;
    //     for (int i = 0; i < m; i++){
    //         int res = 1;
    //         int cur;
    //         cin >> cur;
    //         p++;
    //         for (int i = 0; i < p; i++){
    //             res = res * cur;
    //         }
    //         total += res;
            
    //     }
    //     cout << total << endl;
    // }
    
    // int n, m, sum;
    // cin >> n >> m >> sum;
    // int count = 0;
    // for (int i = 1; i <= n; i++ ){
    //     int rst = sum - i;
    //     if (rst >= 1 && rst <= m) count++;
    // }
    
    // cout << count;
    
    // int n, m , w;
    // cin >> n >> m >> w;
    // int count = 0;
    // for (int i = 1; i <= n; i++){
    //     for (int j = i ; j <= m; j++){
    //         int sum = i + j;
    //         if (sum >= 1 && sum <= w) count += w - sum + 1;
    //     }
    // }
    // cout << count;
    
    int first = 0;
    int second= 1;
    for (int i = 0; i < 20; i++){
        int sum = first + second;
        cout << sum << " ";
        first = second;
        second = sum;
        
    }
    return 0;
}
