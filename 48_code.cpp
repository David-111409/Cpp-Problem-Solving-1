#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    
    int stars = 1;
    
    for (int i = 0; i < rows; i++){
        
    int spaces = rows - stars / 2 - 1;
        for (int p = 0; p < spaces; p++){
            cout << " ";
        }
        
        for (int j = 0; j < stars; j++){
            cout << "*";
        }
        
        cout << endl;
        
        stars += 2;
    }
    
    stars -= 2;
    
    for (int i = 0; i < rows; i++){
        
    int spaces = rows - stars / 2 - 1;
        for (int p = 0; p < spaces; p++){
            cout << " ";
        }
        
        for (int j = 0; j < stars; j++){
            cout << "*";
        }
        
        cout << endl;
        
        stars -= 2;
    }
    
    

    return 0;
}
