#pragma once
#include<bits/stdc++.h>
using namespace std;

class BankAccount {
  int balance;
  public:

  BankAccount(int balance){
    this->balance = balance;
  }  

  bool WithDrawBalance(int amt){
    if(amt <= balance){
        balance -= amt;
        return true;
    }

    return false;
  }

};