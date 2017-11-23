//
// Created by stardust on 2017/11/23.
//
#include <iostream>
#include "my_head.h"
using namespace std;

#include <iomanip>
using std::setw;

#include <random>


void test1() {
    int n[10];
    for (int i = 0; i < 10; ++i) {
        n[i] = i + 100;
    }
    cout << "Element" << setw(13) << "Value" << endl;
    for (int j = 0; j < 10; ++j) {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
}


void test2() {
    double *p;
    double balance[5] = {1.0, 2.0, 45.0, 23.33, 45.98};

    p = balance;

    for (int i = 0; i < 5; ++i) {
        cout << "(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }

    for (int i = 0; i < 5; ++i) {
        cout << "(balance + " << i << ") : ";
        cout << *(balance + i) << endl;
    }
}


void my_func1(int *array, int size) {
    cout << endl << "muy_func_1" << endl;
    for (int i = 0; i < size; ++i) {
        cout <<"array[" << i << "] = " <<  array[i] << endl;
        cout <<"*(array + " << i << "): " <<  *(array + i) << endl << endl;
    }
}


void my_func2(int array[], int size) {
    cout << endl << "muy_func_2" << endl;
    for (int i = 0; i < size; ++i) {
        cout <<"array[" << i << "] = " <<  array[i] << endl;
        cout <<"*(array + " << i << "): " <<  *(array + i) << endl << endl;
    }
}


void my_func3(int array[5], int size) {
    cout << endl << "muy_func_3" << endl;
    for (int i = 0; i < size; ++i) {
        cout <<"array[" << i << "] = " <<  array[i] << endl;
        cout <<"*(array + " << i << "): " <<  *(array + i) << endl << endl;
    }
}


void test3() {
    int array[] = {1, 2, 3, 4, 5};
    my_func1(array, 5);
    my_func2(array, 5);
    my_func3(array, 5);
}


int * get_random() {
    static int r[10];
    for (int &i : r) {
        i = rand();
        cout << i << endl;
    }
    return r;
}


void test4() {
    int *r;
    r = get_random();

    for (int i = 0; i < 10; ++i) {
        cout << *(r+i) << endl;
    }

}

void learn3() {
    test4();

    cout << endl;
    int a[] = {1,2,3};
    for (int i : a) {
        cout << i << endl;
    }
}
