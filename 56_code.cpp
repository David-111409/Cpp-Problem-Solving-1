#include <iostream>
#include <climits>
using namespace std;
int main()
{   
    int n ;
    cin >> n;
    
    int ar[10] = {};
  
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
      
        if(num == 0) ar[0]++;
      
        while(num){
            ar[num % 10]++;
            num = num / 10;
        }
    }
    
    for (int i = 0; i < 10; i++){
        cout << i << " : " << ar[i] << endl;
    }
  
    return 0;
}

/*
#include <iostream>
#include <climits>
using namespace std;
int main()
{   
    int n ;
    cin >> n;
    
    int ar[501] = {};
    
    for (int i = 0; i < n; i++){
        int cur;
        cin >> cur;
        if (!ar[cur]) cout << cur << " ";
        ar[cur]++;
    }
    
    // cout << ar[10];
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
//   int n;
//   cin >> n;
//   int ar[501]{};
//   for (int i = 0; i < n; i++){
//       int cur ; cin >> cur;
//       ar[cur] = i;
//   }
   
//   int k;
//   cin >> k;
//   for (int j = 0; j < k; j++){
//       int cur ; cin >> cur;
//       if (ar[cur]) cout << ar[cur] << "\n";
//       else cout << -1 << endl;
//   }
//   cout << ar[500];
   
   // 6p: sorting array
   
//   int n; 
//   cin >> n;
//   int ar[501] {};
//   int max = -1;
//   for (int i = 0; i < n; i++){
//       int cur ; cin >> cur;
//       ar[cur]++;
//       if (cur > max) max = cur;
//   }
// //   cout << max << endl;
//   for (int e = 0;  e <= max; e++){
//       int m = ar[e];
//       if (m == 1) cout << e << " "; 
//       else if (m > 1){
//           for (int i = 0; i < m; i++) cout << e << " " ;
           
//       }
//   }

    int sum = 0;
    int maxSum = 0;
    int n;
    int k;
    cin >> k >> n;
    int ar[n];
    int s = 0 , e = k -1;
    
    for (int i = 0; i < n; i++){
        cin >> ar[i];
        if (i < k) {
            maxSum += ar[i];
            
        }
        
        else if (i >= k){
            cout << sum << endl;
            if (i == k){
                sum = maxSum;
                cout << sum;
            }
            int r = i - k;
            sum -= ar[r];
            sum += ar[i];
            if (sum > maxSum) {maxSum = sum; s = r + 1 ; e = i;}

        }
        
    }
        cout << maxSum << endl;
        cout << s << " " << e;
    
    return 0;
}
*/
