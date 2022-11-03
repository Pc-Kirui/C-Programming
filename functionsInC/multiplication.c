/* Description:
Computers are playing an increasing role in education.Write a program that will help an elementary school student learn multiplication.Use rand to produce two positive one-digit integers.it should the type the question such as:"How much is 6 times 7?" The student then types the answer.Your program checks the student answer.If it is correct, print "Very good!" then asks another multiplication question. If the answer is wrong, print "No,Please try again." then let the student try again repeatedly until the student finally gets it right.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int learnMultiplication(int num,int num1);

int main()
{
    int i,j,userInput,counter = 0;
    srand(time(NULL));

    do{
        counter++;
        
        i = 1 + rand() % 10;
        j = 1 + rand() % 10;
        printf("How much is %d times %d ? ",i,j);
        scanf("%d",&userInput);
        printf("Very good!\n");

        if(counter == 10)
        break;

        while(userInput != learnMultiplication(i,j)){
            printf("No. Please try again.\n");
            printf("How much is %d times %d ? ",i,j);
            scanf("%d",&userInput);

            if(userInput == learnMultiplication(i,j)){
                printf("Very good!");
                break;
            }

        }
    }while(userInput == learnMultiplication(i,j));
    return 0;
}

int learnMultiplication(int num,int num1){
    return num * num1;
}