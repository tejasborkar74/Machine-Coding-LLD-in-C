#pragma once
#include<bits/stdc++.h>
#include "ATMStates/ATMStates.h"
#include "ATMStates/IdleState.h"
using namespace std;

class ATM {
    public:
    ATMState state = new IdleState(); 
};