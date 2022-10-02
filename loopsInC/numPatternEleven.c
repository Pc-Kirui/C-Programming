//Printing the pattern shown below
// 1
// 3*2
// 4*5*6
// 10*9*8*7
// 11*12*13*14*15
#include<stdio.h>
int main()
{
    int i,j,k,a = 0;
    for(i = 1;i <= 5;i++){
        if(i % 2 == 1){
            k = a+1;
            for(j = 1;j <= i;j++){
            printf("%d",k++);
            if(j < i)
            printf("*");
            }
            printf("\n");
        }
        else{
            k = a = k+i-1;
            for(j = 1;j <= i;j++){
            printf("%d",k--);
            if(j < i)
            printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}