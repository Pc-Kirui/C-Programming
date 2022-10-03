//Funtion displaying at the left margin of the screen a solid
//square whose side is specified by integer parameter side
#include<stdio.h>

int solidSquare(int side);

int main()
{
    int side;
    printf("Enter the length of the square side.\n");
    scanf("%d",&side);

    solidSquare(side);
    return 0;
}
int solidSquare(int side){
    int i,j;
    for(i =1;i <= side;i++){
        for(j = 1;j <= side;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}