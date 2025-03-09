#pragma once
#include<bits/stdc++.h>
using namespace std;

class Card {
    int pin, cvv;
    string cardHolderName;
    long cardNumber;

    public:
    Card(int pin, int cvv, string cardHolderName, long cardNumber){
        this->pin = pin;
        this->cvv = cvv;
        this->cardHolderName = cardHolderName;
        this->cardNumber = cardNumber;
    }

    bool isCorrectPin(int inputPin){
        return (inputPin == pin);
    }

};