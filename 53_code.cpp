#include <iostream>
#include<cmath>
using namespace std;

// int max(int a, int b){
//     if (a >= b) return a;
//     return b;
// }

// int max(int a, int b, int c){
//     int past = max(a, b);
//     if (past >= c) return past;
//     return c;
// }
// int max(int a, int b, int c, int d){
//     int past = max(a, b, c);
//     if(past >= d) return past;
//     return d;
// }

// int max(int a, int b, int c, int d, int e){
//     int past = max(a, b, c, d);
//     if (past >= e) return past;
//     return e;
// }

// int max(int a, int b, int c, int d, int e, int f){
//     int past = max(a, b, c, d, e);
//     if (past >= f) return past;
//     return f;
// }

// string reverse_string(const string &str){
//     int l = str.size();
//     string rev = "";
//     for (int i = 0; i < l; i++){
//         rev += str[l - i - 1];
//     }
//     return rev;
// }

// string palindrome_array(int ar[], int len){
//     for (int i = 0; i < len; i++){
//         if (ar[len-i-1] != ar[i]) return "not palindrome array";
//     }
//     return "palindrome array";
// }

// void set_powers(int ar[], int len = 5, int m = 2){
//     for (int i = 0; i < len; i++){
//         ar[i] = pow(m, i);
//     }
// }

// bool is_prime(int n){
//     if (n <= 1) return false;
//     if (n == 2 || n == 3) return true;
//     if (n % 2 == 0 || n % 3 == 0) return false;
//     for (int i = 5; i * i <= n; i = i + 6){
//         if (n % i == 0 || n % (i + 2) == 0) return false;
//     }
//     return true;
// }

// int nth_prime(int k){
//     int n = 0;
//     int i = 0;
//     while (true){
//         if (is_prime(n)){
//             i++;
//             if (i == k) return n;
//         };
//         n++;
//     }
//     return i;
// }

// void read(double &a, double &b){
//     cin >> a >> b;
// }

// double add(double a, double b){
//     return a + b;
// }

// double mult(double a, double b){
//     return a * b;
// }

// double divide(double a, double b){
//     return a / b;
// }

// double sub(double a, double b){
//     return a - b;
// }

// void display(double a, double b,int  &count){
    
//       while (true){
//         cout << "Enter a number from 1 to 5:\n";
//         int c;
//         cin >> c;
        
//         if (c == 1 || c == 2 || c == 3 && b != 0 || c == 4) count++;
        
//         if (c == 1){
//             cout << "sum: " << add(a, b) << endl;
//         }
        
//         else if (c == 2){
//             cout << "sub: " << sub(a, b) << endl;
//         }
        
//         else if (c == 3) {
//             if (b != 0){
//                 cout << "divide: " << a / b << endl;
//             }
//             else cout << "We can not divide by zero\n";
//         }
        
//         else if (c == 4) cout << "mult: " << a * b << endl;
        
        
//         else if (c == 5) {cout << "We have done " << count << " operations" << endl;
//             break;
//         }
        
//         else {
//             cout << "Give me a right number\n";
//         }
//       }
    
    
// }

// void calc(){
//     int count = 0;
//     double a, b;
//     cout << "Give me two numbers:\n";
//     read(a, b);
//     display(a, b, count);
   
// }

bool  starts_with(string input, string pattern, int pos){
    int l = pattern.size();
    for (int i = 0; i < l; i++){
        if (pattern[i] != input[pos++]) return false;
        // cout << pattern[i] << " : " << input[pos++] << endl;
    }
    return true;
}

string replace_str(string input, string pattern, string str_to ){
    int l = input.size();
    int c = 0;
    int i = 0;
    int k = max(pattern.size()-1, str_to.size() - 1) ;
    int n = min(pattern.size()-1, str_to.size() - 1) ;

    string new_string = "";
    for ( ; i < l; i++){
        if (starts_with(input, pattern, i)){
            for (int i = 0; i <= k; i++){
                new_string += str_to[i];
            }
            i = i +  n ;
        }
        else {
            new_string += input[i];
        }
    }
    return new_string;
}
int main()
{

// {   cout << replace_str("khaled ahmed", "ed", "o") << endl;
     cout << replace_str("aabbaaccaaa", "aa", "1234");
    // cout << starts_with("dawoud", "d", 5);
    
    // max number of 6 numbers

    // int a, b, c, d, e, f;
    // cin >> a >> b >> c >> d >> e >> f;
    // cout << max(a, b, c, d, e, f);
    
    // string reverse
    
    // string word ;
    // cin >> word;
    // cout << reverse_string(word);
    
    // palindrome array
    // int ar[] = {2, 3, 3, 3, 2, 5};
    // int s = sizeof(ar) / sizeof(ar[0]);
    // // cout << s;
    // cout << palindrome_array(ar, s);
    // int  len;
    // int m;
    // cin >> len >> m;
    // int ar[len];
    
    // set_powers(ar, len, m);
    // for (int i = 0; i < len; i++) {
    //     if(i) {
    //         cout << "|";
    //     }
    //     cout << ar[i];
    // }
    
    // prime number
    // cout << nth_prime(1) << endl;
    // cout << nth_prime(2) << endl;
    // cout << nth_prime(3) << endl;
    // cout << nth_prime(4) << endl;
    // cout << nth_prime(5) << endl;
    // cout << nth_prime(6) << endl;
    // cout << nth_prime(7) << endl;
    // cout << nth_prime(8) << endl;
    

    //  calc();

    return 0;
}
