#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double KM_TO_CM = 100000.0;
    const double KM_TO_METER = 1000.0;
    const double KM_TO_INCH = 39370.1;
    const double KM_TO_FEET = 3280.84;

    double km;
    cout << "Enter a distance in kilometers: ";
    cin >> km;

    double cm = km * KM_TO_CM;
    double meter = km * KM_TO_METER;
    double inch = km * KM_TO_INCH; 
    double feet = km * KM_TO_FEET;

    cout << fixed << setprecision(2) << km << " kilometers is equivalent to:" << endl;

    cout << setw(20) << setfill(' ') << cm << " centimeters" << endl;
    cout << setw(20) << setfill(' ') << meter << " meters" << endl;
    cout << setw(20) << setfill(' ') << inch << " inches" << endl;
    cout << setw(20) << setfill(' ') << feet << " feet" << endl;

    return 0;
}
