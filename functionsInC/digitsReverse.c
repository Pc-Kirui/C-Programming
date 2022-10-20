//Function that takes an integer value and returns the number with its digits reversed.
#include<stdio.h>
int reverse(int num);
int main()
{
    int num,result;
    printf("Enter a positive integer.\n");
    scanf("%d",&num);

    result = reverse(num);
    printf("Number with its digits reversed is:\n%d",result);
    return 0;
}
int reverse(int num){
    int rem,sum = 0;
    while(num != 0){
        rem = num % 10;
        sum = sum * 10 + rem;
        num = num/10;
    }
    return sum;
}