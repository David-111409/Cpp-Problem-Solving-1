#include <iostream>
#include<algorithm>
using namespace std;

class Triangle{
    private:
    float height;
    float width;

    public:
     void setHeight_and_width(int h, int b){
        height = h;
        width = b;
     }
     

    void getHeight_and_width(){
        cout <<"height: " << height<< endl;
        cout <<"width: "<< width << endl;
     }

     void getArea(){
        cout <<"area: " << height * width / 2 << endl;
     }
};
// class Car{
//     private: 
//         char name[15];
//         int model;
//         int maxSpeed;
//         char color[10];

//     public:
//         void setName(char n[]){
//             strcpy(name, n);
//         }
//         void setColor( char c[]){
//             strcpy(color, c);
//         }
//         void setSpeed(int s){
//             maxSpeed = s;
//         }
//         void setModel(int mod){
//             model = mod;
//         }

//         char* getName(){
//             return name;
//         }
//         int getModel(){
//             return model;
//         }

//         int getSpeed(){
//             return maxSpeed;
//         }

//         char* getColor(){
//             return color;
//         }

//         void pirntDetails(){
//             cout << "name: " << getName() << endl;
//             cout << "model: " << getModel() << endl;
//             cout << "color: " << getColor() << endl;
//             cout << "speed: " << getSpeed() << endl;
//         }

    
// };

// char* name(char n[10]){
//     return n;
// }
int main() {
//    int ar[] = {110, 2, 3, -10, 5, 10, 200, -50};
//    sort(ar, ar+8);
// //    int l = sizeof(ar) / sizeof(int);
// //     for (int i = 0; i < l - 1; i++){
// //         for (int j = 0; j < l - 1; j++){
// //             if (ar[j] > ar[j+1]) swap(ar[j+1], ar[j]);
// //         }
// //     }
//     for (int el : ar) cout << el << " ";


    // cout << name("Dawoud");
    // Car x;
    // x.setName("kia");
    // x.setColor("red");
    // x.setModel(2015);
    // x.setSpeed(200);
    // x.pirntDetails();
    // cout << "from me " << x.getModel();

    Triangle y;
    y.setHeight_and_width(5, 10);
    y.getHeight_and_width();
    y.getArea();
    return 0;
}
