#include<iostream>
using namespace std;
// const int mx = 100;
// template <class t>
// class stac{
//     int top;
//     t item[mx];
//     public:
//     stac() : top(-1) {}
//     void push(t el){
//         if (top >= mx - 1) cout << "The stack is empty" << endl;
//         else {
//             top++;
//             item[top] = el;
//         }
//     }
//     bool isEmpty(){
//         return top == -1;
//     }

//     void pop(){
//         if (isEmpty()) cout << "the stack is emtpy" << endl;
//         else {
//             top--;
//         }

//     }

//     void pop(t &popped){
//         if (isEmpty()) cout << "the stack is emtpy" << endl;
//         else {
//             popped = item[top];
//             top--;
//         }

//     }
//     void getTop(t &eleTop){
//         if (isEmpty()) cout << "The stack is emtpy" << endl;
//         else {
//             eleTop = item[top];
//         }
//     }
//     void print(){
//         cout << "[" ;
//         for (int i = top ; i >= 0; i--) {
//             cout << item[i] << " ";
//         }
//         cout << "]" << endl;
//     }

// };

// void insertionSort(int ar[], int s){
//     int key, j;
//     for (int i = 1; i < s; i++){
//         key = ar[i]; 
//         j = i - 1;
//         while (j >= 0 && ar[j] > key){
//             ar[j+1] = ar[j];
//             j--;
//         }
//         ar[j+1] = key;
//     }

// }
void insertionSort(int ar[], int s){
    int key, j;
    for (int i = 1; i < s; i++){
        key = ar[i];
        j = i - 1;
        while (j >= 0 && ar[j] < key){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = key;
    }
}
int main() {
    // stac<int> s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.pop();
    // s.push(40);
    // int y;
    // s.getTop(y);
    // s.print();
    // cout << y << endl;
    // int top ;
    //  // Push عناصر
    //  s.push(10);
    //  s.push(20);
    //  int x;
    //  s.pop(x);
    //  cout << x << endl;
    //  s.push(30);
    // s.push(40);
     // طباعة الstack
    //  s.print(); 
    //  s.getTop(top);
    //  cout << top << endl;

//     stac <string> names;
//     string f ;
//     names.getTop(f);
//     names.push("khaled");
//     names.push("khaled2");
//     names.push("khaled3");
//     names.push("khaled4");
//     string first;
//    names.getTop(first);


//     names.print();
//     cout << first << endl;

int ar[] =  {2, 4, -1, 5, -10, 2, 3, 50};
int s = sizeof(ar) / sizeof(ar[0]);
insertionSort(ar, s);
for (int i = 0; i < s; i++) cout << ar[i] << " ";
  
}
