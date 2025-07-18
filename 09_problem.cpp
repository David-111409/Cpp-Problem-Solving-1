#include <iostream>
using namespace std;

int main() {
    string first ;
    string second;
  
    cin >> first >> second;
    
    int len1 = first.length();
    int len2 = second.length();
    int lenMax = len1 > len2 ? len1 : len2;
    int s1 = 0, s2 = 0;
    
    for(int i = 0; i < lenMax; i++){
        if (i < len1){
            s1 += first[i];
        }
        if (i < len2){
            s2 += second[i];
        }
    }
    
     if (s1 <= s2) {
         cout << "Yes";
     }
     else {
         cout << "No";
     }

    
    return 0;
}
