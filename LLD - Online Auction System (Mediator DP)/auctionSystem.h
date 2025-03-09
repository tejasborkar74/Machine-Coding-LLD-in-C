#pragma once 
#include <bits/stdc++.h>
#include "bidders.h"
using namespace std;

// interface
class AuctionMediator {
public:
    virtual void addBidder(Bidder *bidder)=0;
    virtual void placeBid(int bidderIdx, int amount)=0;
    virtual int getNumberOfBidders()=0;
    virtual int getAmount()=0;
};

class Auction: public AuctionMediator {
    vector<Bidder*> bidders;
    int currentBidAmount = 0;
public:
    void addBidder(Bidder *bidder) override {
        bidders.push_back(bidder);
    }

    // this will place the bid and notify all bidders
    void placeBid(int bidderIdx, int amount) override {
        Bidder *bidder = bidders[bidderIdx];
        for(auto node: bidders){
            if(node != bidder) {
                bidder->receiveBiddingNotification(amount);
            }
        }
    }

    int getNumberOfBidders() override{
        return bidders.size();
    }

    int getAmount() override {
        return this->currentBidAmount;
    }
};
