//
// Created by Carlos R. Arias on 4/5/23.
//

#ifndef RULE_OF_THREE_PERSON_H
#define RULE_OF_THREE_PERSON_H

#include <string>
using std::string;

class Person {
private:
    char* _name;
public:
    Person(const char* name);
    Person(const Person& person);
    const Person& operator=(const Person& person);
    ~Person();
    string ToString()const;

};


#endif //RULE_OF_THREE_PERSON_H
