//Printing the pattern shown below
// 1
// 2 3 3 2
// 4 5 6 6 5 4
// 7 8 9 10 10 9 8 7
#include<stdio.h>
int main()
{
    int i,j,k = 1,m;
    for(i = 1;i <= 4;i++){
        m = k;
        for(j = 1;j <= i;j++){
            printf("%d ",k++);
        }
        for(j = k - 1;j >= m;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}