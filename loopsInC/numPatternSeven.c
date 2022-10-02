//printing patterns in c
#include<stdio.h>
int main()
{
    int i,j,spaces;

    for(i = 1;i <= 7;i++){
        for(j = 7;j >= i;j--){
            printf("*");
        }
        for(spaces = 2;spaces <= i;spaces++){
            printf(" ");
        }
        for(spaces = 2;spaces <= i;spaces++){
            printf(" ");
        }
        for(j = i;j <= 7;j++){
            printf("*");
        }
        printf("\n");
    }
     for(i = 1;i <= 7;i++){
        for(j = i;j >= 1;j--){
            printf("*");
        }
        for(spaces = 6;spaces >= i;spaces--){
            printf("  ");
        }
        for(j = 1;j <= i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}