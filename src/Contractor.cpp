//
// Created by Andres on 20/3/2022.
//

#include "Contractor.h"

Contractor::Contractor(const string &string, int i, int employeeId, int jobId, float paymentPerHour,
                       const BankAccount &bankAccount, int fixedHours) : Employee(string, i, employeeId, jobId,
                                                                                  paymentPerHour, bankAccount),
                                                                         fixedHours(fixedHours) {}

Contractor::~Contractor() = default;

int Contractor::getFixedHours() const {
    return fixedHours;
}

void Contractor::setFixedHours(int fixedHours) {
    Contractor::fixedHours = fixedHours;
}

float Contractor::calculateSalary() {
    return 0;
}

string Contractor::returnHomeAddress() {
    return "";
}

string Contractor::returnOfficeAddress() {
    return "";
}
