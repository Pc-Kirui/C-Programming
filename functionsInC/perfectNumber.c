/*Function perfect that determines if parameter number is a perfect nummber.
use this function in a program that determines and prints all the perfect 
numbers between 1 and 1000.Print the factors of each perfect number to confirm
the number is indeed perfect.challenge the power of your computer by testing numbers
much larger than 1000.*/
#include <stdio.h>
int perfectNumber(int num);
int main()
{
    int range,result;
    printf("Enter the range to determine the perfect numbers.\n");
    scanf("%d",&range);

    printf("\n%s\n%s\n%s\n","********", "Perfect Numbers.", "********");
    //printf("%s%10s\n","Perfect No.","Factors");
    perfectNumber(range);

    return 0;
}
int perfectNumber(int num){
    int sum,rem,i,j;

     for(i = 1;i <= num;i++){
        sum = 0;
        for(j = 1;j <= i/2;j++){
            rem = i % j;
            if(rem == 0){
                sum = sum + j;
            }   
        }
        if(sum == i){
           printf("%d\n",i);
        }
    }
    return 0;
}