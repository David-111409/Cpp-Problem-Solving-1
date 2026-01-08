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
