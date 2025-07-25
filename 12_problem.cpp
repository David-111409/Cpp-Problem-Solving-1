// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<string>
using namespace std;

string evenOrOdd(const vector<int> &v){
         int sum = 0;
         
         for (int i : v)
             sum += i;
         
         
         if (sum % 2 == 0) 
            return "Even";
         else
            return "Odd";
     }
int main() {
    cout << evenOrOdd({1,2, 3, 4}) << "\n";
    cout << evenOrOdd({1}) << "\n";
    cout << evenOrOdd({}) << "\n";
    cout << evenOrOdd({0, 1, 5}) << "\n";
    cout << evenOrOdd({0, 1, 3}) << "\n";

    return 0;
}
