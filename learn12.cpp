//
// Created by stardust on 2017/11/26.
//

#include <iostream>
#include "my_head.h"

using namespace std;


class Line12 {
public:
    double get_length();
    Line12(double length);
    Line12(const Line12 &obj);
    ~Line12();

private:
    double *ptr;
};

Line12::Line12(double length){
    cout << "init" << endl;
    this->ptr = new double;
    *ptr = length;
}

Line12::Line12(const Line12 &obj){
    cout << "copy" << endl;
    this->ptr = new double;
    *ptr = *obj.ptr;
}

Line12::~Line12(){
    delete this->ptr;
}


double Line12::get_length() {
    return *ptr;
}

void display(Line12 obj) {
    cout << obj.get_length() << endl;
}


void test12_1() {
    Line12 line(12.3);
    display(line);
}

void learn12() {
    test12_1();
}

