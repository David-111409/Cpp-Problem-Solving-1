    #include<iostream>
    using namespace std;
     
    // int f(int n) {
    // 	int res = 0;
    // 	for (int i = 0; i < n; ++i){
    // 		res *= i + 3;
    // 	}
    // 	return res;
    // }
     
        int main() {
    // 	cout << f(13);
        // int n;
        // int s1, e1, s2, e2, s3, e3;
        // int count = 0;
        
        // cin >> n;
        // cin >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;
        
        // if (n >= s1 && n <= e1) count++;
        // if (n >= s2 && n <= e2) count++;
        // if (n >= s3 && n <= e3) count++;
        
        // cout << count;
        
        int s1, e1, s2, e2;
        cin >> s1 >> e1 >> s2 >> e2;
        
        int s = max(s2, s1);
        int e = min(e2, e1);
        
        if(s < e) cout << s << " " << e;
        else if (s == e) cout << s;
        else cout << -1;
          
    	 return 0;
    }

/*
    #include<iostream>
    using namespace std;
     
    
     
        int main() {
    
        
        // prime check
        // int n;
        // cin >> n;
        // int res = 1;
        // if (n <= 1) res = 0;
        // else if (n == 2 || n == 3) res = 1;
        // else if (n % 2 == 0 || n % 3 == 0) res = 0;
        
        // else {
        //     for (int i = 5; i * i <= n; i = i + 6){
        //         if(n % i == 0 || (n % (i + 2) == 0)){
        //         res = 0; 
        //         break;}
        //     }
        // }
        
        // if (res) cout << "YES";
        // else cout << "NO";
        
        // quad
        int count = 0;
        for (int a = 1; a <= 200; a++){
            for (int b = 1;  b <= 200; b++){
                for (int c = 1; c <= 200; c++){
                    int d = a + b - c;
                    if(d >= 1 && d <= 200) ++count;
                    // for (int d = 1; d <= 200; d++){
                    //     if (a + b == c + d) {
                    //         ++count;
                    //         // cout << a << " " << b << " " << c << " " << d << endl;
                    //         // break;
                    //     }
                    // }
                }
            }
        }
        cout << count;
    	return 0;
    }
*/
