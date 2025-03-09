#include<bits/stdc++.h>
#include "Models/ticTacToeGame.h"

using namespace std;

int main(){

    TicTakToeGame *game = new TicTakToeGame(3);
    cout<<game->startGame()<<endl;
}