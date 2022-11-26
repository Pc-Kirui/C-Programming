//using structure member and structure pointer operators
#include<stdio.h>

//card structure definition
struct card{
    char *face;
    char *suit;
};

int main()
{
    struct card aCard;
    struct card *cardPtr;

//placing strings into aCard
    aCard.face = "Ace";
    aCard.suit = "Spades";
    
    cardPtr = &aCard; //assign address of aCard to cardPtr

    printf("%s%s%s\n",aCard.face, " of ", aCard.suit);
    printf("%s%s%s\n",cardPtr->face, " of ", cardPtr->suit);
    printf("%s%s%s\n",(*cardPtr).face, " of ", (*cardPtr).suit);

    return 0;
}