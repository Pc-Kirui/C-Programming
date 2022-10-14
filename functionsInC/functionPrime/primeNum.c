/*Function that determines if number is prime.*/
#include<stdio.h>
int isPrime(int num);

int main()
{
    int num,result,i;
    
    printf("Enter a positive integer to check if its a prime number.\n");
    scanf("%d",&num);
    printf("\n%s\n%s\n%s\n\n","********", "Prime Numbers.", "********");
    
    result = isPrime(num);
    printf("%d",result);
    return 0;
}
int isPrime(int num){
    int count,i;
    count = 0;
    for(i = 1;i <= num;i++){
        if(num % i == 0){
            count++;
        }
    }

    if(count == 2){
        printf("%d is Prime No.\n",num);
    }
    else{
        printf("%d is NOT Prime No.\n",num);
    }
}