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

/*

#include <iostream>
#include <climits>
using namespace std;
int main()
{   int n;
    cin >> n;
    int ar[n];
    
    for (int i = 0; i < n; i++){
        cin >> ar[i];
    }
    
    // int current = ar[1] + 1;
    // int left = ar[0] - 0;
    // int minValue = left + current ;
    // for (int j = 2; j < n; j++){
    //     current = left + ar[j] + j;
    //     minValue = min(current, minValue);
    //     left = min(left, ar[j] - j);
    // }
    // cout << minValue;
    
    int first = INT_MAX;
    int second = INT_MAX;
    int third = INT_MAX;
    
    for (int el : ar){
        if (el < first){
            third = second;
            second = first;
            first = el;
        } 
        else if (el < second){
            third = second;
            second = el;
            
        }
        else if (el < third) {
            third = el;
        }
        
        
    }
    cout << first << " " << second << " " << third;
    
    return 0;
}
*/

/*

#include <iostream>
#include <climits>
using namespace std;
int main()
{   
    int ar[771] = {};
    int m = 0;
    int n ;
    cin >> n;
    int c ;
    for (int i = 0; i < n; i++){
        cin >> c;
        ar[c+500]++;
        if (ar[c+500] > ar[m+500]) m = c;
    }
    
    cout << m << " repteated " << ar[m+500] << " times";
    return 0;
}
*/
