#pragma once
#include<bits/stdc++.h>
#include "Card.h"
#include "BankAccount.h"
using namespace std;

class User {
    Card card;
    BankAccount bankAccount;

    public:
    Card getCard(){
        return card;
    }

    BankAccount getBankAccount(){
        return bankAccount;
    }
};