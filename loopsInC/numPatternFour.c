//Printing the pattern below
// 5432* and 1234
// 543*1     2341
// 54*21     3421
// 5*321     4321
// *4321
#include<stdio.h>
int main()
{
    int i,j;

    //Loop for the first pattern.
    for(i = 1;i <= 5;i++){
        for(j = 5;j >= 1;j--){
            if(j == i)
            printf("*");
            else
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n");
//Loop for the second pattern
    for(i = 1;i <= 4;i++){
        for(j = i;j <= 4;j++){
            printf("%d",j);
        }
        for(j = i-1;j >= 1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}