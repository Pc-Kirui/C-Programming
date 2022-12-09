// A player rolls two dice. Each die has six faces. These faces contain 1, 2, 3, 4, 5, and 6 spots. After
// dice have come to rest, the sum of the spots on the two upward faces is calculated. If the sum is 7 or 11
//  on the first throw, the player wins. If the sum is 2, 3, or 12 on the first throw (called craps), the
// player loses (i.e the "house wins"). If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, then that
// sum becomes the player's "point". To win, you must continue rolling the dice until you "make your
// point". The player loses by rolling a 7 before making the point.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status
{
    WON,
    LOST,
    CONTINUE
};

int rollDice();

int main()
{
    int sum, point;
    enum Status gameStatus;
    srand(time(NULL));
    sum = rollDice();

    // player wins on the first throw
    switch (sum)
    {
    case 7:
    case 11:
        gameStatus = WON;
        break;

    // player loses on the first throw
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;

    // players point on the first throw
    default:
        gameStatus = CONTINUE;
        point = sum;
        printf("Point is %d\n", point);
        break;
    }
    while (gameStatus == CONTINUE)
    {
        sum = rollDice();

        if (sum == point)
        {
            gameStatus = WON;
        }
        else if (sum == 7)
        {
            gameStatus = LOST;
        }
    }
    // display won or lost message
    if (gameStatus == WON)
    {
        printf("Player wins.\n");
    }
    else
    {
        printf("Player loses.\n");
    }
    return 0;
}
int rollDice()
{
    int a, b, sum;
    a = 1 + rand() % 6;
    b = 1 + rand() % 6;
    sum = a + b;

    printf("Player rolled %d + %d = %d\n", a, b, sum);
    return sum;
}