// strtref.cpp -- using struct
// Created by 20862 on 2022/4/15.
//

#include <iostream>
#include <string>

struct free_throws {
    std::string name;
    int made;
    int attempts;
    double percent;
};

void display(const free_throws &ft);

void set_pc(free_throws &ft);

free_throws &accumulate(free_throws &target, const free_throws &source);

int main() {
    free_throws ft1 = {"Joe", 13, 14};
    free_throws ft2 = {"Bob", 10, 16};
    free_throws ft3 = {"Mary", 7, 12};
    free_throws ft4 = {"Mike", 9, 12};
    free_throws ft5 = {"John", 7, 14};
    free_throws team = {"team", 0, 0};

    free_throws dup;
    set_pc(ft1);
    display(ft1);
    accumulate(team, ft1);
    display(team);

    display(accumulate(team, ft2));
    accumulate(accumulate(team, ft3), ft4);

    dup = accumulate(team, ft5);
    display(dup);
    display(team);

    return 0;
}

void display(const free_throws &ft) {
    std::cout << ft.name << " " << ft.made << " " << ft.attempts << " " << ft.percent << std::endl;
}

void set_pc(free_throws &ft) {
    if (ft.attempts != 0)
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    else
        ft.percent = 0;
}

free_throws &accumulate(free_throws &target, const free_throws &source) {
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}
