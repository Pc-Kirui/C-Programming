//Cube function using call by value
#include<stdio.h>

int cubeByValue(int n);//function prototype
int main()
{
    int number = 5;
    printf("The original value of the number is %d\n",number);

    number = cubeByValue(number);
    
    printf("The new value of the number is %d\n",number);
    return 0;
}
int cubeByValue(int n){
    return n*n*n;
}