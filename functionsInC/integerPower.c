//function integer power that takes two integer arguments and 
//returns a value of base^exponent
//uses for to control calculation.
#include<stdio.h>

int integerPower(int base,int exponent);
int main()
{
    int base,exponent,result;
    printf("Enter two positive integers.\n");
    scanf("%d%d",&base,&exponent);

    result = integerPower(base,exponent);
    printf("Result = %d",result);
}
int integerPower(int base,int exponent){
    int i,result = 1;
    for(i = 1;i <= exponent;i++){
        result =  result * base;
    }
    return result; 
}