// swaps.cpp -- swapping with references and with pointers
// Created by 20862 on 2022/4/15.
//
#include <iostream>

void swapr(int &, int &);

void swapp(int *, int *);

void swapv(int, int);

int main() {
    using namespace std;
    int val1 = 1, val2 = 2;
    cout << "Before swap, val1 = " << val1 << ", val2 = " << val2 << endl;
    swapr(val1, val2);
    cout << "After swap, val1 = " << val1 << ", val2 = " << val2 << endl;
    int *ptr1 = &val1, *ptr2 = &val2;
    cout << "Before swap, *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
    swapp(ptr1, ptr2);
    cout << "After swap, *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
    swapv(val1, val2);
    cout << "After swap, val1 = " << val1 << ", val2 = " << val2 << endl;
    return 0;
}

void swapr(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapp(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swapv(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}