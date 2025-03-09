#include <bits/stdc++.h>
#include "bidders.h"
#include "auctionSystem.h" 
using namespace std;


Bidder::Bidder(string name, AuctionMediator *auction) {
    this->name = name;
    this->auction = auction;
}

void Bidder::receiveBiddingNotification(int amount){
    cout<<"Bidder: "<<name<<" got the notification of latest bid: "<<amount<<endl;
}

string Bidder::getName(){
    return name;
}
