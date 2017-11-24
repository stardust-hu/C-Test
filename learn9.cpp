//
// Created by stardust on 2017/11/24.
//

#include <iostream>
#include "my_head.h"
#include <cstring>

using namespace std;

struct Books {
    char title[50];
    char author[20];
    int book_id;
};


void test9_1() {
    struct Books book1{};
    strcpy(book1.title, "title");
    strcpy(book1.author, "author");
    book1.book_id = 12;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.book_id << endl;

    struct Books *book;
    book = &book1;
    cout << book->book_id << endl;
}


typedef struct {
    char title[50];
    char author[20];
    int book_id;
} Book;


void test9_2() {
    Book *a;
    a = (Book *)malloc(sizeof(Book));
    a->book_id = 13;
    cout << a->book_id << endl;
    free(a);
    Book *b;
    b = (Book *)malloc(sizeof(Book));
//    a = nullptr;
    cout << a->book_id << endl;
}


void learn9() {
    test9_2();
}
