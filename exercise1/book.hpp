
#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int pages;

public:
    Book(string t, string a, int p);
    void display();
};

#endif