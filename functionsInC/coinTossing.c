/*Description:
Write a program that simulates coin tossing.For each toss of the coin the program should print Heads or Tails.Let the program toss the coin 100 times, and count the number of times each side of the coin appears.Print the results.The program should call a seperate function flip that takes no arguments and returns 0 for tails and 1 for heads.[Note: If the program realistically simulates the coin tossing,then each side of the coin should appear approximately half the time for the total of approximately 50 heads and 50 tails.]*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int funcFlip();

int main()
{
    int result,hCount,tCount,toss;
    hCount = tCount = 0;
    srand(time(NULL));
    for(toss = 1;toss <= 100;toss++){
        result = funcFlip();
        if(toss % 10 == 0)
            printf("\n");
        if(result == 0){
            printf("Head  ");
            hCount++;
        }
        else{
            printf("Tail  ");
            tCount++;
        }
    }
    printf("\n");
    printf("\nNumber of times the head appears = %d\n",hCount);
    printf("\nNumber of times the tail appears = %d\n\n",tCount);

    funcFlip();

    return 0;
}
int funcFlip(){
    return rand() % 2;
}