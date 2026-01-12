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
/*
#include <iostream>
using namespace std;





int main()
{
    
//   const int s = 200;
//   int arr[s];
//   int N;
//   cin >> N;
   
//   for (int i = 0; i < N; i++)
//       cin >> arr[i];
   
   
//     //   cout << arr[0];
//     int d = 1;
//     for (int j = 0; j < N; j++){
//         if(arr[j] > arr[j+1]) {
//             d = 0;
//             break;
//         }
//     }
    
//     if (d) cout << "YES";
//     else cout << "NO";

    // const int s = 199;
    // int ar[s] {0};
    
    // int n; cin >> n;
    
    // for (int i = 0; i < n; i++) cin >> ar[i];
    
    // int min = 2000;
    // int max = 0;
    // for (int j = 0; j < n; j++){
    //     int cur = ar[j];
    //     if(cur > max) max = cur;
    //     if (cur < min) min = cur;
    // }
    // for (int k = 0; k < n; k++){
    //     if(ar[k] == max) ar[k] = min;
    //     else if(ar[k] == min) ar[k] = max;
    // }
    // cout << "min: " << min << endl;
    // cout << "Max: " << max << endl;
    // for (int m = 0; m < n; m++) cout << ar[m] << " ";
    
    const int s = 1000;
    int ar[s]{0};
    int n;
    cin >> n;
    for (int i = 0; i < n ; i++){
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++){
        if(ar[i] != ar[i+1]) 
            // if (i) cout << " ";
            {
                cout << ar[i];
                cout <<  " ";
            }
    }
    return 0;
}
*/
