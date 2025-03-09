#include <bits/stdc++.h>
#include "auctionSystem.h"
#include "bidders.h"
using namespace std;

int main() {
    AuctionMediator *auction = new Auction();
    Bidder *b1 = new Bidder("a", auction);
    Bidder *b2 = new Bidder("b", auction);
    Bidder *b3 = new Bidder("c", auction);
    Bidder *b4 = new Bidder("d", auction);

    auction->addBidder(b1);
    auction->addBidder(b2);
    auction->addBidder(b3);
    auction->addBidder(b4);


    bool endBid = false;
    while(!endBid) {
        cout<<"Place BID >> Please enter bidder index and amount"<<endl;
        int i, amt;
        cin>>i>>amt;

        if(auction->getNumberOfBidders() < i){
            cout<<"Incorrect Bidder Index !!"<<endl;
            continue;
        }

        if(auction->getAmount() <= amt){
            cout<<"Amount not sufficient !!"<<endl;
            continue;
        }

        // place bid
        auction->placeBid(i, amt);
    }

}