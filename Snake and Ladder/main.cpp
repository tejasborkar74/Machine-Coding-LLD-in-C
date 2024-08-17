#include<bits/stdc++.h>
#include "Models/snakeAndLadderGame.h"
using namespace std;

int main(){
    SnakeAndLadderGame *game = new SnakeAndLadderGame(5);
    cout<<game->startGame();
    return 0;
}