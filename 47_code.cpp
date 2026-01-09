#include <iostream>
using namespace std;
int main() {
    int n ;
    cin >> n;
    int k = n + 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if ( i == j || (i + j == k)){
                cout << "*";
            }
            else cout << " " ;
        }
        
        cout << endl;
    }

    return 0;
}

/*
#include <iostream>
using namespace std;
int main()
{
   int count = 0;
   
   for (int i = 50 ; i <= 300; i++){
       int j = 70;
       
       if (i >= 70){
           j = i + 1;
       }
           
       for (; j <= 400; j++){
               int sum = i + j;
               if ( sum % 7 == 0 )
                     count++;
       
       }
   }
   
    cout << count;
    

    return 0;
}
*/

/*


#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int s = 3;
    // for (int i = n; i > 0; ){
    //     if (s % 4 != 0){
    //         cout << s << " " ;
    //         i--;
    //     }
    //     s+= 3;
    // }
    
    // int t;
    // int n, min;
    // cin >> t;
    
    // int count;
    
    // for (int i = 0; i < t; i++){
    //     cin >> count;
    //     cin >> min;
    //     count--;
    //     for (int j = 0; j < count; j++){
    //         cin >> n;
    //         if (n < min){
    //             min = n;
    //         }
            
    //     }
    //     cout << min << endl;

    // }
    // int n, R = 0;
    // cin >> n;
    
    // while(n){
    //     // cout << n << endl;
    //     // cout << rn << endl;
    //     int rn = n % 10;
    //     R = R * 10 + rn;
    //     n /= 10;
    // }
    // cout << R << " " << R * 3;
    
    int t;
    cin >> t;
    string word;
    string res;
    for (int i = 0; i < t; ++i){
        cin >> word;
        int l = word.length() == 2;
        
        if(l){
            
            char first = tolower(word[0]);
            char second = tolower(word[1]);
            bool condition = (first == 'n' && second == 'o') || (first == 'o' && second == 'n');
            
            if (condition)
                cout << word << " " ;
            
                    }
    }
    return 0;
}
*/
