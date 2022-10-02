//Printing the pattern shown below.
// 1*2*3*4*17*18*19*20
//   5*6*7*14*15*16
//     8*9*12*13
//       10*11
#include<stdio.h>
int main()
{
    int i,j,spaces,m,s,n = 4,k=1;
    m = n*n + 1;
    for(i = 4;i >= 1;i--){
        for(spaces = 4;spaces >= i;spaces--){
            printf(" ");
        }
        for(j = 1;j <= i;j++){
            printf("%d*",k++);
           // if(j < i)
            //printf("*");
        }
        s = m;
        for(j = 1;j <= i;j++){
            printf("%d",m++);
            if(j < i)
            printf("*");
        }
        m = s-i+1;
        printf("\n");
    }
    return 0;
}