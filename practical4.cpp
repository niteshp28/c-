#include <iostream>

using namespace std;

int num1;
int num2;

int main() {
    cout<<"Enter num1: "<<endl;
    cin >>num1;
    cout<<"Enter num2: "<<endl;
    cin >>num2;
    int sum = ::num1 + ::num2;
    cout << "Sum = " <<sum << endl;
    return 0;
}
