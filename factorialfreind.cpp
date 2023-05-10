#include <iostream>

using namespace std;

class Factorial {
private:
    int num;
public:
    Factorial(int n) {
        num = n;
    }
    friend int calcFactorial(Factorial);
};

int calcFactorial(Factorial f) {
    int fact = 0;
    for (int i = 0; i < f.num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;
    Factorial f(num);
    cout << "Factorial of " << num << " is: " << calcFactorial(f) << endl;
    return 0;
}
