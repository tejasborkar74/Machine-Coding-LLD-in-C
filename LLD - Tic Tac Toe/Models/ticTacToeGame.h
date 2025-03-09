#pragma once
#include<bits/stdc++.h>
#include "player.h"
#include "board.h"
using namespace std;

class TicTakToeGame {
    list<Player*> players;
    Board* board;
public:
    TicTakToeGame(int size){
        PieceType x = X;
        PlayingPiece *crossPiece = new PlayingPiece(x);
        Player *p1 = new Player("Player1", crossPiece);

        PieceType o = O;
        PlayingPiece *zeroPiece = new PlayingPiece(o);
        Player *p2 = new Player("Player2", zeroPiece);

        players.push_back(p1);
        players.push_back(p2);

        board = new Board(size);
    }

    string startGame() {
        cout<<"Tic Tac Toe Game starts !!"<<endl;
        bool noWinner = true;
        while(noWinner){
            Player *playerTurn = players.front();
            players.pop_front();
            players.push_back(playerTurn);

            board->printGameBoard();
            if(board->isThereFreeCells() == false){
                noWinner = false;
                continue;
            }

            int r, c;
            cout<<"Player: "<<playerTurn->getPlayerName()<<" enter the row, col"<<endl;
            cin>>r>>c;

            bool pieceAddedSuccessfully = false;
            while(pieceAddedSuccessfully == false){
                pieceAddedSuccessfully = board->addPiece(r, c, playerTurn->getPlayingPiece());
                if(!pieceAddedSuccessfully){
                    cout<<"Incorrect position entered, try again !!"<<endl;
                    cout<<"Re-enter r and c:"<<endl;
                    cin>>r>>c;
                }
            } 

            bool isWinner = board->isThereWinner(r, c, playerTurn->getPlayingPiece());
            
            if(isWinner){
                return playerTurn->getPlayerName();
            }

        }

        return "Tie !!";
    }

};