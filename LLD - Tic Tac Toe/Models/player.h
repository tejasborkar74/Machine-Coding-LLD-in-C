#pragma once
#include<bits/stdc++.h>
#include "playingPiece.h"
using namespace std;

class Player {
    string name;
    PlayingPiece *piece;
public:
    Player(string name, PlayingPiece *piece) {
        this->name = name;
        this->piece = piece;
    }

    string getPlayerName(){
        return name;
    }

    PlayingPiece* getPlayingPiece(){
        return piece;
    }
};