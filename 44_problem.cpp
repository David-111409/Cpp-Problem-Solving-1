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

/*
#include <iostream>
using namespace std;
int main()
{
    int N, num , max;
    cin >> N;
    cin >> num;
    cin >> max;
    N = N - 2;
    
    if(max < num){
            max = num;
        }
    if (N){
        cin >> num;
        if (max < num){
            max = num;
        }
        
        N--;
    }
    
     if (N){
        cin >> num;
        if (max < num){
            max = num;
        }
        
        N--;
    }
    
     if (N){
        cin >> num;
        if (max < num){
            max = num;
        }
        
        N--;
    } if (N){
        cin >> num;
        if (max < num){
            max = num;
        }
        
        N--;
    } if (N){
        cin >> num;
        if (max < num){
            max = num;
        }
        
        N--;
    } if (N){
        cin >> num;
        if (max < num){
            max = num;
        }
        
        N--;
    }
     if (N){
        cin >> num;
        if (max < num){
            max = num;
        }
        
        N--;
    }
    
    
    
   
    cout << "the max number is:" << max;

    return 0;
}
*/
