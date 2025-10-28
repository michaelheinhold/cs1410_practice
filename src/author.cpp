#include "author.h"
// CRUD
// name
std::string Author::getName() const {  return name; }
void Author::setName(const std::string& name){ this->name = name; }

// nationality
std::string Author::getNationality() const { return nationality; }
void Author::setNationality(const std::string& nat){  nationality = nat; }