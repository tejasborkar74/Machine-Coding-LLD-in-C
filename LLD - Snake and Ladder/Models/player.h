#pragma once
#include<bits/stdc++.h>
using namespace std;

class Player {
    int id;
    string name;
    int currPos;
public:
    Player(int id, string name){
        this->id = id;
        this->name = name;
        currPos = 1;
    }

    int getCurrPosition(){
        return currPos;
    }

    string getPlayerName(){
        return name;
    }

    void updateCurrentPosition(int pos) {
        currPos = pos;
    }
};