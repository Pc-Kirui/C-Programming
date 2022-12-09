// Write a C program that plays the game of "guess the number" as follows:You program chooses the number to
// be guessed by selecting an integer at random in the range 1 to 1000.The program then types:
//     I have a number between 1 and 1000.
//     Can you guess the number?
//     Please type your first guess.
// The player then types the first guess. The program responds with one of the following:
//     1. Execellent! You guessed the number!
//        Would you like to play again(y or n)?
//     2. Too low. Try again.
//     3. Too high. Try again.
// If the player's guess is incorrect, your program should loop until the player finally gets the number
// right. Your program should keep telling the player Too high or Too low to help the player "zero in" on
// the correct answer.[Note: The searching technique employed in this problem is called binary search.]
// Modify the program to count the number of guesses the player makes. If the number is 10 or fewer, print
// Either you know the secret or you got lucky! if the player guesses the number in 10 tries, then print
// Ahah! You know the secret! If the player makes more than 10 guesses, then print You should be able to do
// better! Why should it take no more than 10 guesses? Well with each "good guess" the player should be able to eliminate half of the numbers.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numToGuess();

int main()
{
    int result, guess, counter;
    counter = 0;
    srand(time(NULL));

    result = numToGuess();
    printf("I have a number between 1 and 1000.\n");
    printf("Can you guess the number?\n");
    printf("Please type your first guess: ");

    do
    {
        scanf("%d", &guess);
        counter++;

        if (guess < result)
        {
            printf("Too low. Try again.\n");
        }
        else if (guess > result)
        {
            printf("Too high. Try again.\n");
        }
        else
        {
            printf("Excellent! You guessed the number!\n");
            break;
        }
    } while (guess != result);
    printf("Number of guesses: %d\n", counter);
    if (counter == 10)
    {
        printf("Ahah! You know the secret.\n");
    }
    else if (counter < 10)
    {
        printf("Either you know the secret or you got lucky!\n");
    }
    else
    {
        printf("You should be able to do better!\n");
    }
}
int numToGuess()
{
    return 1 + rand() % 1000;
}