// Card shuffling and dealing program using structures
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Card structure definition
struct card
{
    const char *face;
    const char *suit;
};

// new type name for stucture card
typedef struct card Card;

// function prototypes
void shuffle(Card *const wDeck);
void deal(const Card *const wDeck);
void fillDeck(Card *const wDeck, const char *wFace[], const char *wSuit[]);

int main()
{
    Card deck[52];

    // initialize array of pointers
    const char *face[] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    // initialize array of pointers
    const char *suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    srand(time(NULL));

    fillDeck(deck, face, suit);
    shuffle(deck);
    deal(deck);

    return 0;
}
void shuffle(Card *const wDeck)
{
    int i;     // counter
    int j;     // variable to hold the random value between 0 - 51
    Card temp; // define temporary structure for swapping cards

    // loop through the wDeck randomly swapping cards
    for (i = 0; i <= 51; i++)
    {
        j = rand() % 52;
        temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    }
}

// Dealing cards
void deal(const Card *const wDeck)
{
    int i; // counter

    // loop through the deck
    for (i = 0; i <= 51; i++)
    {
        printf("%5s of %-8s%c", wDeck[i].face, wDeck[i].suit, (i + 1) % 2 ? '\t' : '\n');
    }
}

// Place strings into card structures
void fillDeck(Card *const wDeck, const char *wFace[], const char *wSuit[])
{
    int i; // counter

    // loop throug wDeck
    for (i = 0; i <= 51; i++)
    {
        wDeck[i].face = wFace[i % 13];
        wDeck[i].suit = wSuit[i / 13];
    }
}