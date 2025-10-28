#include "book.h"
// CRUD
// title
std::string Book::getTitle() const { return title; }
void Book::setTitle(const std::string& title){ this->title = title; }

// year
int Book::getYear() const { return year; }
void Book::setYear(int year){ this->year = year; }

// author
Author Book::getAuthor() const {  return author; }
void Book::setAuthor(const Author& a){  author = a; }

void Book::show() const {
    std::cout << "Book: " << title << "( " << year << ")\n"
        << "   Author: " << author.getName() << "(" << author.getNationality() << ")\n";
}