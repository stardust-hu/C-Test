//
// Created by stardust on 2017/11/25.
//

#include <iostream>
#include "my_head.h"

using namespace std;


class Box {
public:
    double length;
    double height;
    double breadth;

    double get_volume() {
        return length * height * breadth;
    }

    void set_height(double height);
};


void Box::set_height(double height){
    this->height = height;

}


void test10_1() {
    Box b;
    double volume;
    b.length = 1.0;
    b.height = 2.3;
    b.breadth = 3.1;

    volume = b.length * b.breadth * b.height;

    cout << volume << endl;

    b.set_height(1.2);
    cout << b.get_volume() << endl;
}


class Line {
public:
    void set_length(double length);
    double get_length();

protected:
    double length;
};


double Line::get_length(){
    return this->length;
}


void Line::set_length(double length) {
    this->length = length;
}


class SmallLine: public Line {
public:
    void set_small_length(double length) {
        this->length = length;
    }
};



void test10_2() {
    Line line;
    line.set_length(10.2);

    double length = line.get_length();

    cout << length << endl;

    SmallLine sl;
    sl.set_small_length(13.1);
    length = sl.get_length();
    cout << length << endl;
}


void learn10() {
    test10_2();
}
