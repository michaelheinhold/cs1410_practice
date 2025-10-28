#include <iostream>
#include <string>

using namespace std;

class Author {
private:
    string name, nationality;

public:
    Author(const string& name, const string& nationality): name(name), nationality(nationality){}

    // CRUD
    // name
    string getName() const {  return name; }
    void setName(const string& name){ this->name = name; }

    // nationality
    string getNationality() const { return nationality; }
    void setNationality(const string& nat){  nationality = nat; }
};

class Book {
private:
    string title;
    int year;
    Author author;

public:
    Book(const string& t, int y, const Author& a): title(t), year(y), author(a){}

    // CRUD
    // title
    string getTitle() const { return title; }
    void setTitle(const string& title){ this->title = title; }

    // year
    int getYear() const { return year; }
    void setYear(int year){ this->year = year; }

    // author
    Author getAuthor() const {  return author; }
    void setAuthor(const Author& a){  author = a; }

    void show() const {
        cout << "Book: " << title << "( " << year << ")\n"
            << "   Author: " << author.getName() << "(" << author.getNationality() << ")\n";
    }
};

int main() {
    Author a("George Orwell", "British");
    Book b("1984", 1949, a);

    b.show();

    return 0;
}