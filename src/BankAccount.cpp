//
// Created by Andres on 20/3/2022.
//

#include "BankAccount.h"

BankAccount::BankAccount(int bankNumber) : bankNumber(bankNumber) {}

BankAccount::~BankAccount() {

}

int BankAccount::getBankNumber() const {
    return bankNumber;
}

void BankAccount::setBankNumber(int bankNumber) {
    BankAccount::bankNumber = bankNumber;
}
