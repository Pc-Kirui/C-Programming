// Modify the craps program to allow wagering. Package as a function the portion of the program that runs
// one game of craps. Initialize variable bankBalance to 1000 dollars.Prompt a player to enter a wager.
// Use while loop to check that wager is less than or equal to bankBalance and if not prompt the user to
// reenter wager until a valid wager is entered. After a correct wager is entered, run one game of craps.
// If the player wins, increase bankBalace by wager and print the new bankBalance. If the player loses,
// decrease bankBalance by wager, print the new bankBalance, Check if bankBalance has become zero, and if
// so print the new message "Sorry. You busted!" As the game progresses, print various messages to create
// some "chatter" such as "Oh, you're going for broke, huh?", or "Aw cmon, take a chance!", or "You're up
// big. Now's the time to cash in your chips!".

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
int gameOfCraps();

int main()
{
    // Initializing bank balance.
    int bankBalance, wager;
    enum Status status;
    bankBalance = 1000;
    srand(time(NULL));

    printf("Enter a wager: ");
    scanf("%d", &wager);
    printf("\n");

    while (wager > bankBalance || wager <= 0)
    {
        printf("You entered an invalid wager! Please enter a valid Wager: ");
        scanf("%d", &wager);
        printf("\n");
    }

    // correct wager entered
    while (wager <= bankBalance)
    {
        status = gameOfCraps();

        // Won
        if (status == WON)
        {
            bankBalance += wager;
            printf("New bankBalance = %d\n", bankBalance);
        }

        // Lost
        else
        {
            bankBalance -= wager;
            printf("New bankBalance = %d\n", bankBalance);
        }
        if (bankBalance <= 0)
            printf("Sorry. You busted!\n");
    }
    return 0;
}

int gameOfCraps()
{
    int sum, playersPoint;
    enum Status gameStatus;
    sum = rollDice();

    switch (sum)
    {
        // player wins on first throw
    case 7:
    case 11:
        gameStatus = WON;
        printf("You're up big. Now's the time to cash in your chips.\n");
        break;

        // Player looses on first throw
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        printf("Oh you're going for broke.\n");
        break;

        // Players point on first throw
    default:
        playersPoint = sum;
        gameStatus = CONTINUE;
        printf("Players point is %d\n", playersPoint);
        printf("Aw cmon, take a chance.\n");
        break;
    }

    // second throw
    while (gameStatus == CONTINUE)
    {
        sum = rollDice();
        if (sum == playersPoint)
        {
            gameStatus = WON;
        }
        else if (sum == 7)
        {
            gameStatus = LOST;
        }
    }

    // Display message
    if (gameStatus == WON)
    {
        printf("Player wins.\n");
    }
    else
    {
        printf("Player loses.\n");
    }

    return gameStatus;
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
