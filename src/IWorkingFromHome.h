//
// Created by Andres on 20/3/2022.
//

#ifndef ABSTRACT_CLASSES_IWORKINGFROMHOME_H
#define ABSTRACT_CLASSES_IWORKINGFROMHOME_H
#include <iostream>
using namespace std;

class IWorkingFromHome {
public:
    IWorkingFromHome() = default;
    virtual ~IWorkingFromHome() = default;
    virtual string returnHomeAddress() = 0;
};


#endif //ABSTRACT_CLASSES_IWORKINGFROMHOME_H
