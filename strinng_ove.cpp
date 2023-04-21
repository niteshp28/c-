#include <iostream>
#include <string>
using namespace std;

string maxString(string s1, string s2, string s3) {
    if (s1 > s2) {
        if (s1 > s3) {
            return s1;
        } else {
            return s3;
        }
    } else {
        if (s2 > s3) {
            return s2;
        } else {
            return s3;
        }
    }
}

int main() {
    string s1, s2, s3;
    cout << "Enter three strings: ";
    cin >> s1 >> s2 >> s3;

    string max = maxString(s1, s2, s3);

    cout << "The maximum string is: " << max << endl;

    return 0;
}
