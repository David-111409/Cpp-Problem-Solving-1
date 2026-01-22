#include <iostream>
#include<cmath>
using namespace std;

// HomeWork : Array Maximum
// int arr_max(int arr[], int len,  double r = -INFINITY){
    
//     if ( len  == -1 ) return r;
//     if (arr[len] > r) r = arr[len];
    
//     return arr_max(arr, len - 1, r);
// }

// sum Array
// int sum(int ar[], int len){
//     if (len == 0) return 0;
//     return ar[len - 1] + sum(ar, len - 1);
// }

// average
// double average(int ar[], double len, int i = 0){
//     if (i == len) return 0 ;
    
//     return ar[i] / len  + average(ar, len ,   i + 1);
// }

// void increment_array(int arr[], int len, int i = 0){
//     if (i == len) return;
    
//     cout << arr[i] + i << " ";
//     increment_array(arr, len, i + 1);
    
// }
// void acc_arr(int ar[], int len, int i = 0, int sum = 0){
//     if (i == len) return;
//     acc_arr(ar, len, i + 1, sum += ar[i]);
//     ar[i] = sum;
// }

void left_max(int ar[], int len, int i = 0, int max = 0){
    if (i == len) return;
    left_max(ar, len, i + 1, (max = ar[i] > max ? ar[i] : max));
    ar[i] = max;
}

int main()
{
    // int ar[] = {1, 8, 2, 10, 3};
    // int s = sizeof(ar) / sizeof(ar[0]);
    // cout << arr_max(ar, s-1);

    // cout << sum(ar, s);
    
    // cout << average(ar,  s);
    return 0;
}

/*
void right_max(int ar[], int len, int s = INT_MIN){
   
    if (len == 0) return;
    
    s = ar[len - 1] > s ? ar[len - 1] : s;
   
    
    ar[len - 1] = s;
    
    right_max(ar, len - 1, s);
}
*/


/*
bool is_prefix(const string &main, const string &pref, int s = 0, int i = 0){
    
    
    if (pref.size() > main.size() || (pref.size() == 0 && s >= main.size() )) return false;
    if (i == pref.size()) return true;
    if (main[s] != pref[i]) return false;
    
    return is_prefix(main, pref, s + 1, i + 1);
}

*/
