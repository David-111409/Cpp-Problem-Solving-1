#include <iostream>
using namespace std;
    class Dog{
        public :
        int age;
        int price;
        string name;
    };

int squareAreasDifference(int r){
    return 2 * r * r;
}

int main() {
  cout << squareAreasDifference(5) << endl;
  cout << squareAreasDifference(6) << endl;
  cout << squareAreasDifference(17) << endl;
  
  return 0;
}
