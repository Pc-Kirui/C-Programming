#include<stdio.h>
int main()
{
    int i,j,spaces;

    for(i = 0;i < 6;i++){
        for(spaces = 6;spaces >= i;spaces--){
            printf(" ");
        }
        for(j = i;j >= 0;j--){
            printf("%d",j);
        }
        for(j = 1;j <= i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}