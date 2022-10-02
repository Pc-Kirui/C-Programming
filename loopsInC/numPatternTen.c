//Printting the pattern shown below
// 1 2 3 4            and 1
// 8 7 6 5                2*3
// 9 10 11 12             4*5*6
// 16 15 14 13            7*8*9*10
// 17 18 19 20 21         11*12*13*14*15
#include<stdio.h>
int main()
{
    int i,j,temp,k=1;
    for(i = 1;i <= 5;i++){
        if(i % 2 == 1){
            for(j = 1;j <= 4;j++){
            printf("%d ",k++);
            }
            k = k+3;
            printf("\n");
        }
        else{
            for(j = 1;j <= 4;j++){
            printf("%d ",k--);
            }
            k = k+5;
            printf("\n");
        }
        }

        printf("\n");
        k = 1;
        for(i = 1;i <= 5;i++){
            for(j = 1;j <= i;j++){
                printf("%d",k++);
                if(j < i)
                printf("*");
            }
            printf("\n");
        }
    return 0;
}