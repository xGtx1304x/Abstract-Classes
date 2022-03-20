//
// Created by Andres on 20/3/2022.
//

#ifndef ABSTRACT_CLASSES_IWORKINGFROMOFFICE_H
#define ABSTRACT_CLASSES_IWORKINGFROMOFFICE_H
#include <iostream>
using namespace std;

class IWorkingFromOffice {
public:
    IWorkingFromOffice() = default;
    virtual ~IWorkingFromOffice() = default;
    virtual string returnOfficeAddress() = 0;
};


#endif //ABSTRACT_CLASSES_IWORKINGFROMOFFICE_H
