#ifndef __AUTHOR_H__
#define __AUTHOR_H__

#include <iostream>
#include <string>

class Author {
private:
    std::string name, nationality;

public:
    Author(const std::string& name, const std::string& nationality): name(name), nationality(nationality){}

    // CRUD
    // name
    std::string getName() const;
    void setName(const std::string& name);

    // nationality
    std::string getNationality() const;
    void setNationality(const std::string& nat);
};

#endif