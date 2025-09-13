#include <iostream>
using namespace std;

int main() {
  // char ar[] = {'a', 'b', 'c', 'd',  '\0'};
  // cout << ar;
  // char ar[6] ;
  // string word;
  // // cin >> ar;
  // getline(cin, word);

  // cout << word;

  // char ar[12];
  // cin.getline(ar, 12);
  // cout << ar;

  // char ar[10];
  // cin.getline(ar, 10);
  // cout << ar;

  // char ar[10];
  // char ar2[10];
  // // cin.get(ar, 10);
  // // cin.get();
  // // cin.get(ar2, 10);
  // cin.getline(ar, 10);
  // cin.getline(ar2, 10);

  // cout << ar << endl;
  // cout << ar2;

  char ar[] = "aaa";
  char ar2[4] = "hei";
  strcat(ar, ar2);
  cout << ar << endl;
  // strcpy(ar2, ar);
  // string word = "hello";
  // string wor = word;
  // cout << ar2 << endl;
  // cout << wor << endl;
  cout << strcmp("abc", "abc") << endl;
  cout << strlen(ar) ;

  return 0;
}
