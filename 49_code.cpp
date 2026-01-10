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

/*
#include <iostream>
using namespace std;

int main()
{  
    // int n;
    // cin >> n;
    
    // if (n < 0){
    //     n = n * -1;
    // }   
    
    // if (n < 10){
    //     cout << "1 digit";
    // }
    // else if (n < 100){
    //     cout << "2 digits";
    // }
    // else if (n < 1000){
    //     cout << "3 digits";
    // }
    // else if (n < 10000){
    //     cout << "4 digit";
    // }
    // else {
    //     cout << "5 digits or more";
    // }
    
    int a, b, c;
    cin >> a >> b >> c;
    
    int v1, v2, v3;
    
    v1 = max(max(a, b) , max(b, c));
    v2 = min(max(a, b) , max(b, c));
    v3 = min(min(a, b) , min(b, c));

    if (v1 < 100) cout << v1;
    else if (v2 < 100) cout << v2;
    else if (v3 < 100) cout << v3;
    else cout << -1;
    
    return 0;
}
*/
