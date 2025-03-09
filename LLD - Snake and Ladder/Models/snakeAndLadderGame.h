#pragma once
#include<bits/stdc++.h>
#include "board.h"
#include "player.h"
#include "dice.h"
using namespace std;

class SnakeAndLadderGame {
    list<Player*> players;
    Board *board;
    Dice *dice;

public:
    SnakeAndLadderGame(int size){
        // player setup
        Player *p = new Player(1, "Bahubali");
        players.push_back(p);
        p = new Player(2, "Kattapa");
        players.push_back(p);

        // Board setup
        board = new Board(size);

        // dice setup
        dice = new Dice(1);

        // snake and ladder setup
        vector<Jump*> snakeAndLadders;
        snakeAndLadders.push_back(new Jump(24, 5));
        snakeAndLadders.push_back(new Jump(15, 10));

        snakeAndLadders.push_back(new Jump(7, 20));
        snakeAndLadders.push_back(new Jump(12, 19));

        board->addSnakesOrLadder(snakeAndLadders); 
    }

    string startGame(){
        int noWinner = true;
        while(noWinner){
            Player *currPlayer = players.front();
            players.pop_front();
            players.push_back(currPlayer);

            cout<<">> TURN of Player: [ "<<currPlayer->getPlayerName()<<" ] with current position: "<<currPlayer->getCurrPosition()
                <<", roll the dice"<<endl;
            int diceResult = dice->rollTheDice();
            cout<<"Dice Result: "<<diceResult<<endl;

            int newPos = currPlayer->getCurrPosition() + diceResult; 
            
            if(!board->moveToNewPosition(currPlayer, newPos)){
                cout<<"New Position: "<<newPos<<" is greater than the size of board !!"<<endl;
            }else {
                if(board->checkIsPlayerWinner(currPlayer)){
                    return "Winner " + currPlayer->getPlayerName();
                }
            }
        }

        return "Tie !!"; // not posible 
    }
    
};