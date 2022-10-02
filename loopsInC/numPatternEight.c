#include<stdio.h>
int main()
{
    int i,j,spaces;

    for(i = 1;i <= 5;i++){
        for(j = 1;j <= i;j++){
            printf("*");
        }
        for(spaces = 5;spaces >= i;spaces--){
            printf(" ");
        }
        for(j = 1;j <= i;j++){
            printf("*");
        }
        printf("\n");
    }

    for(i = 1;i <= 5;i++){
        for(j = 5;j >= i;j--){
            printf("*");
        }
        for(spaces = 1;spaces <= i;spaces++ ){
            printf(" ");
        }
        for(j = i;j <= 5;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}