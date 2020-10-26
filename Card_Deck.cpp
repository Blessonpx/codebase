#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
#include <vector>
using std::vector;
// Defining Cards involved separately from decks as cards involved can be different 
enum Rank { ACE,TWO, THREE, FOUR,FIVE, SIX ,SEVEN ,EIGHT ,NINE,TEN, JACK , QUEEN, KING};
enum Suit {SPADES, CLUBS, DIAMONDS ,HEARTS};
// Create struct Building upon the cards declared
struct Card
{
    Rank rank;
    Suit suit; 
};
// Creating Deck for using vector 
struct Deck 
{
    vector<Card> cards;
    string card_back;
};

// Function to allocate cards

// Function to Pick Top Card (Picked Card Gets removed from the Deck

// Function to shuffle Exsitng Cards

// Function to Add Card to Middle or Botton 

