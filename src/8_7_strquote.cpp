// strquote.cpp -- different designs
// Created by 20862 on 2022/4/15.
//
#include <iostream>
#include <string>

using namespace std;

string version1(const string &s1, const string &s2);

const string &version2(string &s1, const string &s2);

const string &version3(string &s1, const string &s2);

int main() {
    string input;
    string copy;
    string result;

    cout << "Enter a string: ";
    getline(cin, input);
    copy = input;
    result = version1(input, "****");
    cout << "The result of version 1 is: " << result << endl;
    cout << "The origin string: " << input << endl;

    result = version2(input, "####");
    cout << "The result of version 2 is: " << result << endl;
    cout << "The origin string: " << input << endl;

    input = copy;
    result = version3(input, "$$$$");
    cout << "The result of version 3 is: " << result << endl;
    cout << "The origin string: " << input << endl;

    return 0;
}


string version1(const string &s1, const string &s2) {
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}


const string &version2(string &s1, const string &s2) {
    s1 = s2 + s1 + s2;
    return s1;
}


const string &version3(string &s1, const string &s2) {
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}