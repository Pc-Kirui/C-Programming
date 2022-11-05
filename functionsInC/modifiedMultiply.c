//The use of computers in education is referred to as computer assisted instruction (CAI). One 
//problem that develops in CAI environment is student fatigue.This can be eliminated by varying the 
//computers dialogue to hold students attention.Modify the program so the various comments are printed
// for each correct and each incorrect answer as follows:
//Responses to correct answer
    //Very good!
    //Excellent!
    //Nice work!
    //Keep up the good work!
//Responses to incorrect answer
    //No. Please try again.
    //Wrong. Try once more.
    //Don't give up!
    //No. Keep trying.
//Use the random generator to choose a number from 1 to 4 to select response to each answer.Use switch
//statement with printf statements to issue the responses.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int randomNumGen();
int multiply(int num1,int num2);

int main(){
    int result,j,k,userInput;
    srand(time(NULL));

    do{
        j = 1 + rand() % 9;
        k = 1 + rand() % 9;

        printf("How much is %d times %d? ",j,k);
        scanf("%d",&userInput);

        if(userInput == multiply(j,k)){
                result = randomNumGen();
                switch(result){
                    case 1:
                    printf("Very good!\n");
                    break;

                    case 2:
                    printf("Excellent!\n");
                    break;

                    case 3:
                    printf("Nice work!\n");
                    break;

                    case 4:
                    printf("Keep up the good work!\n");
                    break;
                }
            }
    
        while(userInput != multiply(j,k)){
            result = randomNumGen();
            switch(result){
                    case 1:
                    printf("No. Please try again.\n");
                    break;

                    case 2:
                    printf("Wrong. Try once more.\n");
                    break;

                    case 3:
                    printf("Don't give up!\n");
                    break;

                    case 4:
                    printf("No. Keep trying.\n");
                    break;
                }
            printf("How much is %d times %d? ",j,k);
            scanf("%d",&userInput);

            if(userInput == multiply(j,k)){
                result = randomNumGen();
                switch(result){
                    case 1:
                    printf("Very good!\n");
                    break;

                    case 2:
                    printf("Excellent!\n");
                    break;

                    case 3:
                    printf("Nice work!\n");
                    break;

                    case 4:
                    printf("Keep up the good work!\n");
                    break;
                }
            }
            
        }
    }while(userInput == multiply(j,k));
}
int randomNumGen(){
    int i;
    i = 1 + rand() % 4;
    return i;
}
int multiply(int num1,int num2){
    return num1 * num2;
}