//function gcd that returns the greatest common divisor of two integers
#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int a,b,result;
    printf("Enter two numbers to find gcd.\n");
    scanf("%d%d",&a,&b);

    result = gcd(a,b);
    printf("GCD of the two numbers is: %d",result);
    return 0;
}
int gcd(int a,int b){
    int i,hcf;
    for(i = 1;i <= a && i <= b;i++){
        if(a % i == 0 && b % i == 0){
            hcf = i;
        }
    }
    return hcf;
}