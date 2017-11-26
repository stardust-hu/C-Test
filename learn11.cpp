//
// Created by stardust on 2017/11/26.
//

#include <iostream>
#include "my_head.h"

using namespace std;


class Line11 {
public:
    void set_length(double length);
    double get_length();
    Line11(double length);
    ~Line11();

private:
    double length;
};

Line11::Line11(double length) {
    cout << "create Line object!" << endl;
    this->length = length;
}

Line11::~Line11(){
    cout << "delete Line!" << endl;
}

double Line11::get_length() {
    return this->length;
}

void Line11::set_length(double length) {
    this->length = length;
}


void test11_1() {
    Line11 line(12.4);
//    line.set_length(12.3);
    cout << line.get_length() << endl;
}


void learn11() {
    test11_1();
}
