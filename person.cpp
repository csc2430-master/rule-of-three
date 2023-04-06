//
// Created by Carlos R. Arias on 4/5/23.
//

#include "person.h"

#include <cstring>

Person::Person(const char *name) {
    _name = new char[strlen(name) + 1];
    strcpy(_name, name);
}

string Person::ToString() const {
    return string(_name);
}

Person::~Person() {
    delete[] _name;
}

Person::Person(const Person &person) {
    _name = new char[strlen(person._name) + 1];
    strcpy(_name, person._name);

}

const Person &Person::operator=(const Person &person) {
    delete[] _name;
    _name = new char[strlen(person._name) + 1];
    strcpy(_name, person._name);
    return *this;
}
