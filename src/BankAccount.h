//
// Created by Andres on 20/3/2022.
//

#ifndef ABSTRACT_CLASSES_BANKACCOUNT_H
#define ABSTRACT_CLASSES_BANKACCOUNT_H
#include <iostream>
using namespace std;

class BankAccount {
private:
    int bankNumber;
public:
    explicit BankAccount(int bankNumber);
    virtual ~BankAccount();

    int getBankNumber() const;
    void setBankNumber(int bankNumber);
};


#endif //ABSTRACT_CLASSES_BANKACCOUNT_H
