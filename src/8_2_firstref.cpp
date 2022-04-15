// firstref.cpp -- define and using a reference
// Created by 20862 on 2022/4/15.
// 创建和使用引用变量
#include <iostream>

int main() {
    using namespace std;
    int number = 100;
    int &ref = number;
    cout << "number = " << number << endl;
    cout << "ref = " << ref << endl;
    ref = 9;
    cout << "number = " << number << endl;
    cout << "ref = " << ref << endl;

    number = number + 1;
    cout << "number = " << number << endl;
    cout << "ref = " << ref << endl;
    return 0;
}

