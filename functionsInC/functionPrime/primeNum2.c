//Prime numbers between 1 and 10000
#include<stdio.h>
int isPrime(int range);

int main()
{
    int range;
    printf("Enter the range to find prime Numbers.\n");
    scanf("%d",&range);

    printf("\n%s\n%s\n%s\n","********", "Prime NUmbers.", "********");
    isPrime(range);
    return 0;
}
int isPrime(int range){
    int i,j,count,rem;

    for(i = 2;i <= range;i++){
        count =0;
        for(j = 1;j <= i;j++){
            rem = i % j;
            if(rem == 0){
                count++;
            }
        }
        if(count == 2){
            printf("%5d,",i);
        }
    }
    return 0;
}