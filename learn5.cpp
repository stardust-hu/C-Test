//
// Created by stardust on 2017/11/24.
// 指针练习
//

#include <iostream>
#include "my_head.h"

using namespace std;


void test5_1() {
    int var1;
    char var2[10];

    cout << "address of var1: " << &var1 << endl;
    cout << "address of var2: " << &var2 << endl;
}


void test5_2() {
    int var = 20;
    int *p = NULL;

    p = &var;

    cout << var << endl;
    cout << *p << endl;
    cout << p << endl;
}


void test5_3() {
    int array[] = {1, 2, 3, 4};
    int *p;

    p = array;
    for (int i = 0; i < 4; ++i) {
        cout << *(p+i) << endl;
    }
}


void test5_4() {
    const int MAX = 3;
    int var[MAX] = {1, 2, 3};
    int *ptr[MAX];
    for (int i = 0; i < MAX; ++i) {
        ptr[i] = &var[i];
    }
    for (int j = 0; j < MAX; ++j) {
        cout << *ptr[j] << endl;
    }
}


void test5_5(){
    const int MAX = 4;
    const char *names[MAX] = {
            "H1",
            "h3",
            "de",
            "dede dede"
    };
    for (int i = 0; i < MAX; ++i) {
        cout << names[i] << endl;
    }
}


void test5_6() {
    int var;
    int *ptr;
    int **pptr;

    var = 1000;

    ptr = &var;
    pptr = &ptr;

    cout << var << endl;
    cout << *ptr << endl;
    cout << **pptr << endl;
}


void learn5() {
    test5_6();
}
