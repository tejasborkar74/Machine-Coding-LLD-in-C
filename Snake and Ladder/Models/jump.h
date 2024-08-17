#pragma once
#include<bits/stdc++.h>
using namespace std;

class Jump {
    int start, end;
public:
    Jump(int start, int end){
        this->start = start;
        this->end = end;
    }

    int getJumpStart(){
        return start;
    }

    int getJumpEnd(){
        return end;
    }
};