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


/*

#include <iostream>
using namespace std;
int main()
{
//     for (int i = 0; i <= 11; i++)
//         cout << "*";
    
//     cout << endl;
//   for (int i = 0; i<10;i++){
//             cout << "*";
            
//     for (int i = 0; i < 10; i++){
//         cout << " ";
    
//     }
//     cout << "*\n";
 
//   }
    
    
    
//   for (int i = 0; i <= 11; i++)
//         cout << "*";
    
    //  for (int i = 0; i < 5; i++){
    //      for (int j = 0; j < 5; j++){
    //          if ( i == j || i + j == 4) cout << "*";
    //          else cout << " ";
    //      }
    //      cout <<endl;
    //  }
    
    // for (int i = 0; i < 11; i++){
    //     for (int j = 0; j < 11; j++){
    //         if (i == 0 || i == 10) cout << "*";
    //         else if (j == 0 || j == 10) cout << "*";
    //         else cout << " " ;
    //     }
    //     cout << endl;
    // }
    // int n = 5;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         if (i == 0 || i == n-1) cout << "*";
    //         else if (i == n - j - 1) cout<< "*";
    //         else cout << " " ;
    //     }
    //     cout << endl;
    // }
    
    // int n = 5;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         if(i % 2 == 0) cout << "*";
    //         else if (j == 0) cout << "*";
    //     }
    //     cout << endl;
    // }
    
    // int n =  10;
    // for (int i = 0; i< n; i++){
    //     for (int j = 0; j< n; j++){
    //         if (i == 0 || i == n - 1) cout << "*";
    //         else if (j == 0) cout << "*";
    //         else if (j == n - 1) cout << "*";
    //         else if (i == j) cout << "*";
    //         else if (i == n - j - 1) cout << "*";
    //         else cout << " ";
    //     }
        
    //     cout << endl;
    // }
    
    //  int n =  10;
    // for (int i = 0; i< n; i++){
    //     for (int j = 0; j< n; j++){
    //         if (j == 0) cout << "*";
    //         else if (j == n - 1) cout << "*";
    //         else if (i == j) cout << "*";
    //         else cout << " ";
    //     }
        
    //     cout << endl;
    // }
    
    //  int n =  10;
    // for (int i = 0; i< n; i++){
    //     for (int j = 0; j< n; j++){
    //         if (i == 0 || i == (n - 1)  / 2) cout << "*";
    //         else if (j == 0) cout << "*";
    //         // else if (j == n - 1) cout << "*";
    //         // else if (i == j) cout << "*";
    //         // else if (i == n - j - 1) cout << "*";
    //         // else cout << " ";
    //     }
        
    //     cout << endl;
    // }
    
    //  int n =  10;
    // for (int i = 0; i< n; i++){
    //     for (int j = 0; j< n; j++){
    //         if (i == 0 || i == n - 1) cout << "*";
    //         else if (j == 0) cout << "*";
    //         else if (j == n - 1) cout << "*";
    //         else if (i == (n-1) / 2) cout << "*";
           
    //         else cout << " ";
    //     }
        
    //     cout << endl;
    // }
    
    // int n =  10;
    // for (int i = 0; i< n; i++){
    //     for (int j = 0; j< n; j++){
    //         if (i == 0 || i == n - 1) cout << "*";
    //         else if (j == 0) cout << "*";
    //         else if (j == n - 1 && i < n / 2) cout << "*";
    //         else if (i == (n-1) / 2) cout << "*";
           
    //         else cout << " ";
    //     }
        
    //     cout << endl;
    // }
    
     int n =  9;
    for (int i = 0; i< n; i++){
        for (int j = 0; j< n; j++){
            if (i == 0 || i == n - 1) cout << "*";
            else if (j == 0 && i < n / 2) cout << "*";
            else if (j == n - 1  && i > n / 2) cout << "*";
            else if (i == (n-1) / 2) cout << "*";
           
            else cout << " ";
        }
        
        cout << endl;
    }
    return 0;
}
*/
