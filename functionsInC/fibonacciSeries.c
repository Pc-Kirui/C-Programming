// The fibonacci series 0,1,2,3,5,8,13,21,... begins with the terms 0 and 1 and has a property that each
// succeeding term is the sum of the two preceding terms. a) Write a nonrecursive function fibonacci (n)
//  that calculates the nth fibonacci number. b) Determine the largest Fibonacci number that can be printed
// on your system. Modify the program of part a) to use double instead of int to calculate and return
// Fobonacci numbers. Let the program loop until it fails because of an excessively high value.

#include <stdio.h>

int main()
{
    int num, i, firstNum, secondNum, thirdNum;
    firstNum = 0;
    secondNum = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (i == 0 || i == 1)
    {
        printf("nth Fibonacci is: %d", i);
    }
    else
    {
        thirdNum = firstNum + secondNum;
    }

    for (i = 2; i <= num; i++)
    {
        firstNum = secondNum;
        secondNum = thirdNum;
        thirdNum = firstNum + secondNum;
    }
    printf("nth Fibonacci is: %d\n", firstNum);
    return 0;
}