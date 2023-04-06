#include "person.h"

#include <iostream>

using std::cout;
using std::endl;

void Function(Person p);

int main() {
    Person andrey("andy");
    cout << andrey.ToString() << endl;
    Function(andrey);
    Person t("");
    cout << t.ToString() << endl;
    t = andrey;
    cout << t.ToString() << endl;
    return 0;
}

void Function(Person p){
    cout << p.ToString() << endl;
}

