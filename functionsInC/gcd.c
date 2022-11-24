//The greatest common divisor of integers x and y is the largest integer that evenly divides both x and y. 
//Write a recursive function gcd that returns the greatest common divisor of x and y. The gcd of x and y 
//defined recursively as follows: If y is equal to 0, then gcd (x,y) is x; otherwise gcd (x,y) is 
//gcd(y,x%y) where % is the remainder operator.
#include<stdio.h>

int gcd(int x,int y);

int main()
{
    int a,b,result;
    printf("Enter two positive integers.\n");
    scanf("%d%d",&a,&b);
    result = gcd(a,b);
    printf("gcd of %d and %d is %d",a,b,result);
}
int gcd(int x,int y){
    if(y == 0){
        return x;
    }
    else{
        return gcd(y, x % y);
    }
}