//
// Created by stardust on 2017/11/24.
//

#include <iostream>
#include "my_head.h"

using namespace std;


void test4_1() {
    char ch[] = {'a', 'b', 'c'};
    string s = "hello";
    char ch2[] = "world";
    cout << ch << endl;
    cout << s << " " << ch2 << endl;
}


void test4_2() {
    char s1[] = "hello";
    char s2[] = "he";

    strcat(s2, s1);
    cout << s2 << endl;

    strcpy(s2, s1);
    cout << s1 << endl;
    cout << s2 << endl;

    cout << strlen(s1) << endl;

    cout << strcmp(s1, s1) << endl;

    char *p;
    p = strchr(s1, 'e');

    cout << *p << endl;
}


void test4_3() {
    string s1 = "hello";
    string s2 = "world";
    string s3;
    unsigned long len;

    s3 = s1 + " '" + s2;
    cout << s3 << endl;

    s3 = s2;
    cout << s3 << endl;

    len = s3.size();
    cout << len <<endl;
}


void learn4() {
    test4_3();
}
