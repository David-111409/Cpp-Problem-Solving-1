#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

// class Tri{
//     private: 
//     int  base;
//     int height;
//     public:
//         Tri(int a, int b){
//             base = a;
//             height = b;
//         }

//         Tri(){
//             // cout << "Empty const" << endl;
//         }
//        void print(){
//             cout << "The base is : " << base  << endl;
//             cout << "The height is : " << height << endl;
//             cout << "Area : " << base * height / 2 <<  " m^2" << endl; 

//         }

//         void set_base_height(int b, int h){
//             base = b;
//             height = h;
//         }
// };

// class Student{
//     private: 
//     string name;
//     int id;

//     public:
//     Student(string n = "no name", int i = -1){
//         name = n;
//         id = i;
//     }
//      void details(){
//         cout << "name: " << name << endl;
//         cout << "id: " << id << endl; 
//      }

// };
string determineLever(vector<char> ar){
    if (ar[1] == 'f') return "first class lever";
    else if (ar[2] == 'f') return "second class lever";
    return "third class lever"; 
}
int main() {

    // Tri first(5, 10), second;
    // first.print();
    // second.set_base_height(4, 5);
    // second.print();

    // Student one("dawoud", 201);
    // Student one( "Hager", 1);

    // one.details();
    // for (int i = 0;i < 100; i++){
    //     cout << rand() << endl;
    // }
    // srand(-10);
    // srand(time(0));
    // for (int i = 0; i < 10; i++) {
    //     cout << rand() % 30 << endl;
    // }
    // int x , y;
    // x = time(0);
    // for (int i = 0; i < 100000000; i++){

    //     y = time(0);
    // }
    // cout << y - x ;
    // cout << determineLever(vector<char>{'f', 'e', 'l'}) << endl;
    cout << determineLever(vector<char>{'f', 'e', 'l'}) << endl;
    cout << determineLever(vector<char>{'e', 'l', 'f'}) << endl;
    cout << determineLever(vector<char>{'e', 'f', 'l'}) << endl;

    return 0;
}
