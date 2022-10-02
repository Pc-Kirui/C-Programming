//using the & and * operators in c
#include<stdio.h>
int main()
{
    int y = 5;
    int *yPtr;

    printf("The address of y is %p"
            "\nThe value of yPtr is %p",&y,yPtr);

    printf("\n\nThe value of y is %d"
           "\nThe value of *yPtr is %d",y,*yPtr);

    printf("\n\nShowing that & and * are complements of "
           "each other\n&*yPtr = %p"
           "\n*&yPtr = %p\n",&*yPtr,*&yPtr);

    return 0;           
}