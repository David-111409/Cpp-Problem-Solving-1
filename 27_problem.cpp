#include <iostream>
#include<algorithm>
using namespace std;

int main() {
   int ar[] = {110, 2, 3, -10, 5, 10, 200, -50};
   sort(ar, ar+8);
//    int l = sizeof(ar) / sizeof(int);
//     for (int i = 0; i < l - 1; i++){
//         for (int j = 0; j < l - 1; j++){
//             if (ar[j] > ar[j+1]) swap(ar[j+1], ar[j]);
//         }
//     }
    for (int el : ar) cout << el << " ";
    return 0;
}
