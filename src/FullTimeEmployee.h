//
// Created by Andres on 20/3/2022.
//

#ifndef ABSTRACT_CLASSES_FULLTIMEEMPLOYEE_H
#define ABSTRACT_CLASSES_FULLTIMEEMPLOYEE_H
#include "Employee.h"
#include "IWorkingFromHome.h"

class FullTimeEmployee :
        public Employee, public IWorkingFromHome {
private:
    int workingHours;
public:
    FullTimeEmployee(const string &string, int i, int employeeId, int jobId, float paymentPerHour,
                     const BankAccount &bankAccount, int workingHours);

    ~FullTimeEmployee() override;

    int getWorkingHours() const;

    void setWorkingHours(int workingHours);

    float calculateSalary() override;

    string returnHomeAddress() override;
};


#endif //ABSTRACT_CLASSES_FULLTIMEEMPLOYEE_H
