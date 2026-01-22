#include <iostream>
using namespace std;
#include<climits>
int main()
{
    // int n ;
    // int first, second;
    
    // cin >> n;
    // cin >> first >> second;
    
    // if (first < second) {
    //     swap(first, second);
    // }
    
    // for (int i = 2; i < n; i++){
    //     int c;
    //     cin >> c;
    //     if (c > first) {
    //         second = first;
    //         first = c;
    //     }
        
    //     else if (c > second){
    //         second = c;
    //     }
    // }
    
    // cout << first << " " << second << endl;
    // int sum = first + second;
    // cout << sum ;
    
    int n;
    int ar[200];
    cin >> n;
    
    
    for (int i = 0; i < n; i++)
        cin >> ar[n-i-1];
    
    
    for (int i = 0; i < n; i++) cout << ar[i] << " ";
    
}
