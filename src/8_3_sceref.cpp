// sceref.cpp -- defining and using references
// Created by 20862 on 2022/4/15.
//
#include <iostream>

int main() {
    using namespace std;
    int rats = 115;
    int &rodents = rats;
    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;
    cout << "&rats = " << &rats << endl;
    cout << "&rodents = " << &rodents << endl;

    int bunnies = 20;
    rodents = bunnies;
    cout << "rats = " << rats << endl;
    cout << "bunnies = " << bunnies << endl;
    cout << "rodents = " << rodents << endl;

    cout << "&rats = " << &rats << endl;
    cout << "&bunnies = " << &bunnies << endl;
    cout << "&rodents = " << &rodents << endl;

    return 0;
}
