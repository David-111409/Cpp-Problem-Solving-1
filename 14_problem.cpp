// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

string checkSquareAndCube(vector<int> v){
    if (v[0] == 0 && v[1] == 0) return "true";
    if (v[1] == 0) return "false";
    return (sqrt(v[0]) ==  (double(v[1]) / v[0])) ? "true" : "false" ;
}

int main() {
    
// cout << checkSquareAndCube({4, 8}) << endl;
// cout << checkSquareAndCube({16, 48}) << endl;
// cout << checkSquareAndCube({9, 27}) << endl;
// cout << checkSquareAndCube({144, 1728}) << endl;
// cout << checkSquareAndCube({36, 215}) << endl;
// cout << checkSquareAndCube({0, 0}) << endl;
// cout << checkSquareAndCube({1, 0}) << endl;
cout << checkSquareAndCube({4, 9}) << endl;
for (int i = 0; i < 1000; i++){
    if( checkSquareAndCube({i*i, i*i*i}) == "false") cout << "hello"; // all of them are true and that is the right output
}
return 0;
}
