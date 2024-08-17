#pragma once
#include<bits/stdc++.h>
#include "../Enum/pieceType.h"
using namespace std;

class PlayingPiece {
    PieceType piece;
public:
    PlayingPiece(){}
    PlayingPiece(PieceType piece) {
        this->piece = piece;
    }

    char getPlayingPiece() {
        switch(piece){
            case X:
                return 'X';
                break;
            default: 
                return 'O';
        }
    }
};