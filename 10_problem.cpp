#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string number;
    cout << "Enter a number: ";
    cin >> number;

    string add = "5555";

    // Pad the shorter number with leading zeros
    int len1 = number.length();
    int len2 = add.length();

    if (len1 < len2)
        number.insert(0, len2 - len1, '0');
    else if (len2 < len1)
        add.insert(0, len1 - len2, '0');

    string result = "";
    int carry = 0;

    // Add from right to left
    for (int i = number.length() - 1; i >= 0; i--) {
        int sum = (number[i] - '0') + (add[i] - '0') + carry;
        result += (sum % 10) + '0';
        carry = sum / 10;
    }

    // Add remaining carry if any
    if (carry)
        result += carry + '0';

    // Reverse the result since we added digits backwards
    reverse(result.begin(), result.end());

    cout << "Result: " << result << endl;

    return 0;
}
