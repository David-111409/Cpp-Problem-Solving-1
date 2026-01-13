#include <iostream>
using namespace std;

// p11
int suuffix_sum(int ar[], int l, int s)
{
        if(s == 0) return 0;
        
        return ar[l-s] + suuffix_sum(ar, l, s-1);
}

// int palindrome_array(int ar[] , int l , int s = 0){
//     cout << s << " " << l - 1 -s << endl;
//     if(s >= l / 2) return 1;
//     if(ar[s] != ar[l-1-s]) return 0;
    
//     return palindrome_array(ar, l , s+1);
    
// }

// int prefix_sum(int ar[], int l, int m){
//     if(m == 0) return 0;
//     return ar[m-1] + prefix_sum(ar, l, m-1);
// }
int main()
{
    
    int ar[] = {1, 3, 4, 6, 2, 10, 3};
    int l = sizeof(ar) / sizeof(ar[0]);
    
    cout << suuffix_sum(ar, l, 1) << endl;
    cout << suuffix_sum(ar, l, 2) << endl;
    cout << suuffix_sum(ar, l, 3) << endl;

    
    
    // int ar[] = {-1,  1, 4,  2 , 1};
    // int l = sizeof(ar) / sizeof(ar[0]);
    // // cout << palindrome_array(ar, l);
    
    // cout << prefix_sum(ar, l, 3);
    
    
    return 0;
}
