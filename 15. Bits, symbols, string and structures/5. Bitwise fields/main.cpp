#include <iostream>
#include <iomanip>
using namespace std;

struct BitCard{
    unsigned face : 4;
    unsigned suit : 2;
    unsigned color : 1;
};

void fillDeck(BitCard *const);
void deal(const BitCard *const);

int main()
{
    BitCard deck[52];

    fillDeck(deck);
    deal(deck);

    return 0;
}

void fillDeck(BitCard *const wDeck)
{
    for(int i = 0; i <= 51; i++){
        wDeck[i].face = i % 13;
        wDeck[i].suit = i / 13;
        wDeck[i].color = i / 26;
    }
}

void deal(const BitCard *const wDeck)
{
    for(int k1 = 0, k2 = k1 + 26; k1 <= 25; k1++, k2++){
        cout<<"Card: "<<setw(3)<<wDeck[k1].face
        <<" Suit:"<<setw(2)<<wDeck[k1].suit
        <<" Color:"<<setw(2)<<wDeck[k1].color
        <<"   "<<"Card:"<<setw(3)<<wDeck[k2].face
        <<"  Suit:"<<setw(2)<<wDeck[k2].suit
        <<"  Color:"<<setw(2)<<wDeck[k2].color
        <<endl;
    }
}
