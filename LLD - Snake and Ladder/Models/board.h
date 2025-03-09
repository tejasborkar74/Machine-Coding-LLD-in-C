#pragma once
#include<bits/stdc++.h>
#include "cell.h"
#include "player.h"
using namespace std;

class Board {
    int size;
    vector<vector<Cell*> > board;
public:
    Board(int size){
        this->size = size;
        board.resize(size, vector<Cell*> (size));

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                board[i][j] = new Cell();
            }
        }
    }

    pair<int,int> findLocation(int currPos){
        int rem = currPos%size;
        int level = currPos/size;

        int r = level-1, c;
        if(r&1) c = 0;
        else c = size-1;

        if(rem > 0){
            r++;
            if(r&1){
                // l<-r
                c = size-rem;
            }else{
                // l->r
                c = rem-1;
            }
        }

        return {r,c};
    }

    void addSnakesOrLadder(vector<Jump*> &jumps){
        for(int i=0;i<jumps.size();i++){
            auto startPos = findLocation(jumps[i]->getJumpStart());
            board[startPos.first][startPos.second]->updateCellJump(jumps[i]);
        }
    }

    bool moveToNewPosition(Player *player, int newPos){
        if(newPos > size*size)return false;

        player->updateCurrentPosition(newPos);
        cout<<"Player: "<<player->getPlayerName()<<" moved to position: "<<newPos<<endl;

        pair<int,int> loc = findLocation(newPos);
        Jump *jump = board[loc.first][loc.second]->getJump();
        if(jump != NULL){
            if(jump->getJumpStart() < jump->getJumpEnd()){
                cout<<"Player: "<<player->getPlayerName()<<" got a ladder and climbed up to position: "<<jump->getJumpEnd()<<endl;
            }else{
                cout<<"Player: "<<player->getPlayerName()<<" become dinner of snake and moved back to position: "<<jump->getJumpEnd()<<endl;   
            }

            player->updateCurrentPosition(jump->getJumpEnd());
        }
        return true;
    }

    bool checkIsPlayerWinner(Player *player){
        return (player->getCurrPosition() == size*size);
    }

};