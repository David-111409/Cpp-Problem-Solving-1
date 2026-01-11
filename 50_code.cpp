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
