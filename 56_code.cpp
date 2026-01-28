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
