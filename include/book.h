#ifndef __BOOK_H__
#define __BOOK_H__

#include <iostream>
#include <string>
#include "author.h"

class Book {
private:
    std::string title;
    int year;
    Author author;

public:
    Book(const std::string& t, int y, const Author& a): title(t), year(y), author(a){}

    // CRUD
    // title
    std::string getTitle() const;
    void setTitle(const std::string& title);

    // year
    int getYear() const;
    void setYear(int year);

    // author
    Author getAuthor() const;
    void setAuthor(const Author& a);

    void show() const;
};

#endif