#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Card{
    char *face;
    char *suit;
};

void fillDeck(Card *const, char*[], char*[]);
void shuffle(Card *const);
void deal(Card *const);

int main()
{
    Card deck[52];
    char *face[] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
    char *suit[] = {"Hearts", "diamonds", "clubs", "spades"};

    srand(time(0));
    fillDeck(deck, face, suit);
    shuffle(deck);
    deal(deck);

    return 0;
}

void fillDeck(Card *const wDeck, char *wFace[], char *wSuit[])
{
    for(int i = 0; i < 52; i++){
        wDeck[i].face = wFace[i % 13];
        wDeck[i].suit = wSuit[i / 13];
    }
}

void shuffle(Card *const wDeck)
{
    for(int i = 0; i < 52; i++){
        int j = rand() % 52;
        Card temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    }
}

void deal(Card *const wDeck)
{
    for(int i = 0; i < 52; i++){
        cout<<setiosflags(ios::right)
            <<setw(5)<<wDeck[i].face<<" suits"
            <<setiosflags(ios::left)
            <<setw(8)<<wDeck[i].suit
            <<((i + 1) % 2 ? '\t' : '\n');
    }
}
