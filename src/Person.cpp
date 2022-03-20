//
// Created by Andres on 20/3/2022.
//

#include "Person.h"

Person::Person(string name, int age) : name(name), age(age) {

}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}
