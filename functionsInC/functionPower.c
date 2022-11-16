//Write a recursive function power(base, exponent) that when invoked returns base^exponent.For example,
//power(3,4) = 3*3*3*3. Assume that the exponent is an integer greater than or equal to 1. Hint: The 
//recursion step would use the relationship
//           base^exponent = base * base^exponent - 1
//and the terminating condition occurs when exponent is equal to 1 because
//           base^1 = base

#include<stdio.h>

long power(int base,int exponent);

int main(){
    int i,j;
    long result;
    printf("Enter a positive integer: ");
    scanf("%d",&i);

    for(j = 1;j <= 10;j++){
        result = power(i,j);
        printf("base^exponet (%d^%d) = %d\n",i,j,result);
    }
}
long power(int base,int exponent){
    if(exponent == 1){
        return base;
    }
    else{
        return base * power(base,exponent-1);
    }
}