#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

class  Copy{
    private: 
    int a, b, c, d, e, f, g, h;
    public: 
    Copy(int A, int B, int C, int D, int E, int F, int G, int H){
        a = A;
        b = B;
        c = C;
        d = D;
        e = E;
        f = F;
        g = G;
        h = H;
    }
    Copy (const Copy&ob){
        a = ob.a;
        b = ob.b;
        c = ob.c;
        d = ob.d;
        e = ob.e;
        f = ob.f;
        g = ob.g;
        h = ob.h;

    }
    void print(){
        cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << endl;
    }
};
int main() {
    // Copy x(1, 2, 3, 4, 5, 6, 7, 8) ;
    // x.print();
    
    // Copy h(x);
    // h.print();
    int sum = 0;
    for (int i = 1; i < 20; i++){
        if (i % 2 == 1) sum += i;
    }
    cout << sum << endl;


    return 0;
}
