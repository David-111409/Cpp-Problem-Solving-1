

#include <iostream>
using namespace std;

int main()
{  
    // int n;
    // int m;
    // cin >> n >> m;
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= m; j++){
    //         cout << i << " * " << j << " = " << i * j << endl;
    //     }
    // }
    
    int t;
    int n;
    int sum_big;
    int sum_small;
    
    cin >> t;
    
    for (int i = 0; i < t; i++){
        sum_big = 0;
        cin >> n;
        
        for (int j = 0; j < n; j++){
            int k; cin >> k;
            sum_small = k;
            // cin >> sum_small;
            
            for (int m = 0; m < j; m++){
                sum_small *= k;
            }
            
            sum_big += sum_small;
        }
        cout << sum_big<< endl;
    }
   
    return 0;
}
