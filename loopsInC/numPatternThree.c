//Printing the pattern shown below
// 55555
// 45555
// 34555
// 23555
// 12345
#include<stdio.h>
int main()
{
    int i,j,spaces;
    for(i = 5;i >= 1;i--){
        for(j = i;j <= 5;j++){
            printf("%d",j);
        }

        for(j = i-1;j >= 1;j--){
            printf("5");
        }
        printf("\n");
    }

    printf("\n");
    for(i = 1;i <= 4;i++){
        for(spaces = 1;spaces <= i;spaces++){
            printf(" ");
        }
        for(j = i;j <= 4;j++){
            printf("%d",5);
        }
        printf("\n");
    }
    return 0;
}