//
// Created by yhu on 2017/11/22.
//

#include <iostream>

using namespace std;

void swap_1(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


void swap_2(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}


void learn1() {
    int a, b;
    a = 100;
    b = 200;

    swap_1(&a, &b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    swap_2(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    int (*f)(int, int) = [](int x, int y){ printf("hello\n"); return 1;};
    cout<< f(1, 2) << endl;
}
