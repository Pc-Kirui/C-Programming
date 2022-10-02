//Printing the pattern shown below
// 1                     and 1
// 2 3                       2 4
// 4 5 6                     5 7 9
// 7 8 9 10                  10 12 14 16
// 11 12 13 14 15            17 19 21 23 25
// 11 12 13 14 15
// 7 8 9 10
// 4 5 6
// 2 3
// 1
#include<stdio.h>
int main()
{
    int i,j,b,k = 1;

    for(i = 1;i <= 5;i++){
        for(j = 1;j <= i;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }

     for(i = 5;i >= 1;i--){
        b = k-i;
        k = b;
        for(j = 1;j <= i;j++){
            printf("%d ",k++);
        }
        k=b;
        printf("\n");
    }

    printf("\n\n");
    for(i = 1;i <= 5;i++){
        for(j = 1;j <= i;j++){
            printf("%d ",k);
            k = k+2;
        }
        k--;
        printf("\n");
    }
    return 0;
}