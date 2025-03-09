#pragma once
#include<bits/stdc++.h>
#include "jump.h"
using namespace std;

class Cell {
    Jump *jump;
public:
    Cell(){
        jump = nullptr;
    }

    Jump* getJump(){
        return jump;
    }

    void updateCellJump(Jump *j){
        jump = j;
    }
};