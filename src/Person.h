//
// Created by Andres on 20/3/2022.
//

#ifndef ABSTRACT_CLASSES_PERSON_H
#define ABSTRACT_CLASSES_PERSON_H
#include <iostream>
using namespace std;


class Person {
private:
    string name;
    int age;
public:
    Person(string, int);
    virtual ~Person() = default;

    const string &getName() const;
    void setName(const string &name);
    int getAge() const;
    void setAge(int age);
};


#endif //ABSTRACT_CLASSES_PERSON_H
