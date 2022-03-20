//
// Created by Andres on 20/3/2022.
//

#ifndef ABSTRACT_CLASSES_ADDRESS_H
#define ABSTRACT_CLASSES_ADDRESS_H
#include <iostream>
using namespace std;

class Address {
private:
    string type;
    string address;
public:
    Address(const string &type, const string &address);
    virtual ~Address();

    const string &getType() const;
    void setType(const string &type);
    const string &getAddress() const;
    void setAddress(const string &address);
};


#endif //ABSTRACT_CLASSES_ADDRESS_H
