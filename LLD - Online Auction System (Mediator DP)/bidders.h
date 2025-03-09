#pragma once
#include <string>
#include "auctionSystem.h" 
using namespace std;

// Forward declaration (tells compiler that AuctionMediator exists)
class AuctionMediator;

class Bidder {
    string name;
    AuctionMediator *auction;

public:
    Bidder(string name, AuctionMediator *auction);

    void receiveBiddingNotification(int amount);

    string getName();
};
