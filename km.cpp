#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double cm_per_m = 100;
    const double inch_per_m = 39.37;
    const double feet_per_m = 3.28;

    double km;
    cout << "Enter a distance in kilometers: ";
    cin >> km;

    double cm = km * cm_per_m * cm_per_m;
    double m = km * cm_per_m * 10;
    double inch = m * inch_per_m;
    double feet = m * feet_per_m;

    cout << fixed << setprecision(2);
    cout << km << " km is:" << endl;
    cout << setw(12) << setfill(' ') << cm << " cm" << endl;
    cout << setw(12) << setfill(' ') << m << " m" << endl;
    cout << setw(12) << setfill(' ') << inch << " inches" << endl;
    cout << setw(12) << setfill(' ') << feet << " feet" << endl;

    return 0;
}
