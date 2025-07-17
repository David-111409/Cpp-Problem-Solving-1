#include <iostream>
using namespace std;

int main() {
   string big ;
   string small ;
   
   cin >> big >> small;
   
   int lenSmall = small.length();
   int lenBig = big.length();
   int a = 0;
   
   for (int i = 0; i < lenBig; ++i){
      if (small[a] == big[i] )
      {
          ++a;
        
          if (a == lenSmall) 
            break;
      }
    //   cout << i << endl;
      
   }
   
   if (a == lenSmall) 
        cout << "YES";
   else 
        cout << "NO";
   
    return 0;
}
