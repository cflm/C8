// inline.cpp -- using an inline function
// Created by 20862 on 2022/4/14.
//
#include <iostream>

inline double square(double x) {
    return x * x;
}

int main() {
    using namespace std;
    double number = 3.14159;
    cout << "The square of " << number << " is " << square(number) << endl;
    cout << "The square of 3+4 is " << square(3 + 4) << endl;
    return 0;
}
