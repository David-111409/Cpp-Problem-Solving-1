#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

string checkSquareAndCube(vector<int> v){
    return (sqrt(v[0]) == v[1] / v[0]) ? "true" : "false" ;
}

int main() {
    
cout << checkSquareAndCube({4, 8}) << endl;
cout << checkSquareAndCube({16, 48}) << endl;
cout << checkSquareAndCube({9, 27}) << endl;
cout << checkSquareAndCube({144, 1728}) << endl;
cout << checkSquareAndCube({36, 215});
  
return 0;
}
