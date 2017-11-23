//
// Created by stardust on 2017/11/24.
//

#include <iostream>
using namespace std;


void test6_1() {
    int i;
    double d;

    int& r = i;
    double& s = d;

    i = 3;
    d = 12.9;

    cout << r << endl;
    cout << s << endl;
}


void swap_value( int& a, int& b ) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}


void test6_2() {
    int x = 12;
    int y = 34;

    cout << x << " " << y << endl;
    swap_value(x, y);
    cout << x << " " << y << endl;
}


double& set_values( double vals[], int i ) {
    return vals[i];
}


void test6_3() {
    double vals[] = {1, 2, 3};

    for (int i = 0; i < 3; ++i) {
        cout << vals[i] << endl;
    }

    set_values(vals, 1) = 23;
    set_values(vals, 0) = 2244;

    for (int j = 0; j < 3; ++j) {
        cout << vals[j] << endl;
    }
}


void learn6() {
    test6_3();
}
