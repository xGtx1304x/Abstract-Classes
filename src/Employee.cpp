//
// Created by Andres on 20/3/2022.
//

#include "Employee.h"

Employee::Employee(const string &string, int i, int employeeId, int jobId, float paymentPerHour,
                   const BankAccount &bankAccount) : Person(string, i), employeeId(employeeId),
                                                                            jobId(jobId),
                                                                            paymentPerHour(paymentPerHour),
                                                                            bankAccount(bankAccount) {}

Employee::~Employee() = default;

int Employee::getEmployeeId() const {
    return employeeId;
}

void Employee::setEmployeeId(int employeeId) {
    Employee::employeeId = employeeId;
}

int Employee::getJobId() const {
    return jobId;
}

void Employee::setJobId(int jobId) {
    Employee::jobId = jobId;
}

float Employee::getPaymentPerHour() const {
    return paymentPerHour;
}

void Employee::setPaymentPerHour(float paymentPerHour) {
    Employee::paymentPerHour = paymentPerHour;
}

const BankAccount &Employee::getBankAccount() const {
    return bankAccount;
}

void Employee::setBankAccount(const BankAccount &bankAccount) {
    Employee::bankAccount = bankAccount;
}

Address *Employee::getAddressList(int pos) const {
    return addressList.at(pos);
}

void Employee::addAddress(Address *ad) {
    addressList.push_back(ad);
}
