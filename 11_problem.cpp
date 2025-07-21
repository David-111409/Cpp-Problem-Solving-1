#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void printArray(int ar[], int si){
    for (int i = 0 ; i < si ; i++)
        cout << ar[i] * -1 << "\n";
}

int main() {
    //  int n ;
    //  cin >> n;
    //  int ar[n];
    //  for (int i = 0; i < n; i++){
    //      cin >> ar[i];
    //  }
    //  int count = 0;
    //  int maxCount = 0;
    //  for (int el : ar){
    //         //  cout << count << endl;
    //     //  count = 0;
    //      if (el == 0){
    //          ++count;
    //      }
    //      else {
             
    //          count = 0;
    //      }
    //      if (count > maxCount) {
    //              maxCount = count;
    //          }
    //  }
    //  cout << maxCount;
    
    int ar[] = {1,2, 3, -5, 4, -1, 0};
    int si  = sizeof(ar) / sizeof(int);
  
    printArray(ar, si);

    return 0;
}
