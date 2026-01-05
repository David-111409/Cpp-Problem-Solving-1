#include <iostream>
using namespace std;
int main()
{
    int N, num, max ;
    cin >> N;
    cin >> max;

    while (--N){
        
        cin >> num;
        if (num > max){
            max = num;
        }
    
    }
    cout << "the max number is:" << max;

    return 0;
}
