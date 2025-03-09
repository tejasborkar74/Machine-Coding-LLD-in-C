#pragma once
#include<bits/stdc++.h>
#include "../Card.h"
#include "../ATM.h"
#include "../Enum/TransactionType.h"
using namespace std;

class ATMState {
    public:
    virtual void InsertCard(ATM atm, Card card){
        cout<<"OOPS !! Something Went Wrong";
    }
    virtual void AuthenticatePin(ATM atm, Card card, int pin){
        cout<<"OOPS !! Something Went Wrong";
    }
    virtual void SelectOpertions(TransactionType txnType){
        cout<<"OOPS !! Something Went Wrong";
    }
    virtual void CashWithdrawal(ATM atm, Card card, int amt){
        cout<<"OOPS !! Something Went Wrong";
    }
    virtual void DisplayBalance(ATM atm, Card card){
        cout<<"OOPS !! Something Went Wrong";
    }
    virtual void ReturnCard(){
        cout<<"OOPS !! Something Went Wrong";
    }
    virtual void Exit(){
        cout<<"OOPS !! Something Went Wrong";
    }
};