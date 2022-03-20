//
// Created by Andres on 20/3/2022.
//

#include "Employee.h"

Employee::Employee(const string &string, int i, int employeeld, int jobld, float paymentPerHour,
                   const BankAccount &bankAccount, Address **addressList) : Person(string, i), employeeld(employeeld),
                                                                            jobld(jobld),
                                                                            paymentPerHour(paymentPerHour),
                                                                            bankAccount(bankAccount),
                                                                            addressList(addressList) {}

Employee::~Employee() {

}

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

Address *const *Employee::getAddressList() const {
    return addressList;
}
