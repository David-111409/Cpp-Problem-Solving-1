#include <iostream>
using namespace std;

string removeNumbers(string str) {
    string result = "";
  
    for (auto i:str){
      if (!(i >= '0' && i <= '9')) result += i;  
    }
    
    return result;
  }

int main() {
    
    // int ar[4][3];
    // int count = 3;
    // for (int i = 0; i < 4; i++){
    //     for (int j = 0; j < 3; j++){
    //         ar[i][j] = count++;
    //     }
    // }

    // for (int i = 0; i < 4; i++){
    //     for (int j = 0; j < 3; j++){
    //         cout << ar[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << ar[0][1] ;
    
      cout << removeNumbers("mubashir1") << endl;
      cout << removeNumbers("ai4653rf53or4235ce") << endl;
     cout << removeNumbers("pakistan007") << endl;

    return 0;
}
