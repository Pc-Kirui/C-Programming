//Printing the pattern shown below
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
#include<stdio.h>
int main()
{
    int i,j,num;
    printf("Enter a Positive integer.\n");
    scanf("%d",&num);

    for(i = num;i >= 1;i--){
        for(j = num;j >= 1;j--){
            if(j >= i)
            printf("%d ",j);
            else
            printf("%d ",i);
        }
        for(j = 2;j <= num;j++){
            if(j >= i)
            printf("%d ",j);
            else
            printf("%d ",i);
        }
        printf("\n");
    }

    for(i = 2;i <= num;i++){
        for(j = num;j >= 1;j--){
            if(j >= i)
            printf("%d ",j);
            else
            printf("%d ",i);
        }
        for(j = 2;j <= num;j++){
            if(j >= i)
            printf("%d ",j);
            else
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}