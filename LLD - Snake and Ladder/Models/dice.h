#pragma once
#include<bits/stdc++.h>
using namespace std;

class Dice {
    int noOfDice;
public: 
    Dice(int n){
        noOfDice = n;
    }

    int rollTheDice(){
        int total = 0;
        for(int i=0;i<noOfDice;i++){
            total += (rand()%6)+1;
        }
        return total;
    }
};