//include headers and libraries
#include "library.h"
#include <iostream>
//implement class functions

Library() {
    for (int i = 0; i < 10; i++) {
        books[i] = "";
    }
}

bool addBook(string bookName) {
    for (int i = 0; i < 10; i++) {
        if (books[i] == bookName) {
            return false;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (books[i] == "") {
            books[i] = bookName;
            return true;
        }
    }
    return false;
}


bool Library::removeBook(string bookName) {
    for (int i = 0; i < 10; i++) {
        if (books[i] == bookName) {
            books[i] = "";
            return true;
        }
    }
    return false;
}

void print() {
    for (int i = 0; i < 10; i++) {
        if (books[i] != "") {
            cout << books[i] << endl;
        }
    }
}
