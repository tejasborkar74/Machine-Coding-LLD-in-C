#pragma once
#include<bits/stdc++.h>
#include "playingPiece.h"
using namespace std;

class Board {
    int size;
    vector<vector<PlayingPiece*> > board;
public:
    Board(int size){
        this->size = size;
        board.resize(size, vector<PlayingPiece*> (size, NULL));
    }

    bool addPiece(int r, int c, PlayingPiece *piece){
        if(board[r][c] != NULL)return false;
        board[r][c] = piece;
        return true;
    }

    void printGameBoard(){
        cout<<endl;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if(board[i][j] != NULL)cout<<board[i][j]->getPlayingPiece()<<" ";
                else cout<<"_ ";
            }
            cout<<endl;
        }
    }

    bool isThereFreeCells(){
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if(board[i][j] == NULL)return true;
            }
        }

        return false;
    }


    bool isThereWinner(int r, int c, PlayingPiece *piece) {
        // column check
        bool check = true;
        for(int i=0;i<size && check;i++){
            if(board[i][c] != piece) check = false;
        }
        if(check)return check;

        // row check
        check = true;
        for(int j=0;j<size && check;j++){
            if(board[r][j] != piece) check = false;
        }
        if(check)return check;

        // diagonal 1 check
        if(r == c){
            check = true;
            for(int i=0;i<size && check;i++){
                if(board[i][i] != piece) check = false;
            }
            if(check)return check;
        }

        // diagonal 2 check
        if(r+c == size-1){
            check = true;
            for(int i=0;i<size && check;i++){
                int j = size-1-r;
                if(board[i][j] != piece) check = false;
            }
            if(check)return check;
        }

        return false;
    }
};