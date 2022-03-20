//
// Created by Andres on 20/3/2022.
//

#ifndef ABSTRACT_CLASSES_CONTRACTOR_H
#define ABSTRACT_CLASSES_CONTRACTOR_H
#include "Employee.h"
#include "IWorkingFromHome.h"
#include "IWorkingFromOffice.h"

class Contractor :
        public Employee, public IWorkingFromHome, public IWorkingFromOffice {
private:
    int fixedHours;
public:
    Contractor(const string &string, int i, int employeeId, int jobId, float paymentPerHour,
               const BankAccount &bankAccount, int fixedHours);

    ~Contractor() override;

    int getFixedHours() const;

    void setFixedHours(int fixedHours);

    float calculateSalary() override;

    string returnHomeAddress() override;

    string returnOfficeAddress() override;
};


#endif //ABSTRACT_CLASSES_CONTRACTOR_H
