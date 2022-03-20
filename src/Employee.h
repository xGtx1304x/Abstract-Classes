//
// Created by Andres on 20/3/2022.
//

#ifndef ABSTRACT_CLASSES_EMPLOYEE_H
#define ABSTRACT_CLASSES_EMPLOYEE_H
#include "Person.h"
#include "Address.h"
#include "BankAccount.h"
#include <vector>

class Employee :
        public Person {
private:
    int employeeId;
    int jobId;
    float paymentPerHour;
    BankAccount bankAccount;
    vector<Address*> addressList;
public:
    Employee(const string &string, int i, int employeeId, int jobId, float paymentPerHour,
             const BankAccount &bankAccount);
    ~Employee() override;

    int getEmployeeId() const;
    void setEmployeeId(int employeeId);
    int getJobId() const;
    void setJobId(int jobId);
    float getPaymentPerHour() const;
    void setPaymentPerHour(float paymentPerHour);
    const BankAccount &getBankAccount() const;
    void setBankAccount(const BankAccount &bankAccount);
    Address *getAddressList(int pos) const;
    void addAddress(Address* ad);

    virtual float calculateSalary() = 0;
};


#endif //ABSTRACT_CLASSES_EMPLOYEE_H
