// cubes.cpp -- regular and reference arguments
// Created by 20862 on 2022/4/15.
//
#include <iostream>

double cube(double a);

double reference_cube(double &);

int main() {
    using namespace std;
    double number = 3.0;

    cout << "number = " << number << endl;
    cout << cube(number) << " = cube of " << number << endl;
    cout << reference_cube(number) << " = cube of " << number << endl;

    return 0;
}

double cube(double a) {
    a *= a * a;
    return a;
}

double reference_cube(double &ra) {
    ra *= ra * ra;
    return ra;
}
