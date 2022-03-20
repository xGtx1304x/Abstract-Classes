//
// Created by Andres on 20/3/2022.
//

#include "FullTimeEmployee.h"

FullTimeEmployee::FullTimeEmployee(const string &string, int i, int employeeId, int jobId, float paymentPerHour,
                                   const BankAccount &bankAccount, int workingHours) : Employee(string, i, employeeId,
                                                                                                jobId, paymentPerHour,
                                                                                                bankAccount),
                                                                                       workingHours(workingHours) {}

FullTimeEmployee::~FullTimeEmployee() = default;

int FullTimeEmployee::getWorkingHours() const {
    return workingHours;
}

void FullTimeEmployee::setWorkingHours(int workingHours) {
    FullTimeEmployee::workingHours = workingHours;
}

float FullTimeEmployee::calculateSalary() {
    return 0;
}

string FullTimeEmployee::returnHomeAddress() {
    return "";
}


