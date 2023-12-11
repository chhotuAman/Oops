#include<iostream>
using namespace std;

int main() {
    float p, t, r, si;

    cout << "Enter principal amount: ";
    cin >> p;

    cout << "Enter rate of interest: ";
    cin >> r;

    cout << "Enter time in years: ";
    cin >> t;

    si = (p * t * r) / 100;

    cout << "Simple interest is: " << si;

    return 0;
}