//
// Created by stardust on 2017/11/26.
//

#include <iostream>
#include "my_head.h"

using namespace std;


class Line {
public:
    double get_length();
    Line(double length);
    Line(const Line &obj);
    ~Line();

private:
    double *ptr;
};

Line::Line(double length){
    cout << "init" << endl;
    this->ptr = new double;
    *ptr = length;
}

Line::Line(const Line &obj){
    cout << "copy" << endl;
    this->ptr = new double;
    *ptr = *obj.ptr;
}

Line::~Line(){
    delete this->ptr;
}


double Line::get_length() {
    return *ptr;
}

void display(Line obj) {
    cout << obj.get_length() << endl;
}


void test12_1() {
    Line line(12.3);
    display(line);
}

void learn12() {
    test12_1();
}

