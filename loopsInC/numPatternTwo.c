//Printing alphabetic pattern shown below
//  ABCDEFGGFEDCBA
//   ABCDEFFEDCBA
//    ABCDEEDCBA
//     ABCDDCBA
//      ABCCBA
//       ABBA
//        AA
#include<stdio.h>
int main()
{
    int i,j,spaces;

    for(i = 7;i >= 1;i--){
        for(spaces = i;spaces < 7;spaces++){
            printf(" ");
        }
        for(j = 1;j <= i;j++){
            printf("%c",j+64);
        }
        for(j = i;j >= 1;j--){
            printf("%c",j+64);
        }
        printf("\n");
    }
    
    //Loops for printing the lower patterrns
    for(i = 1;i <= 7;i++){
        for(spaces = i;spaces < 7;spaces++){
            printf(" ");
        }
        for(j = 1;j <= i;j++){
            printf("%c",j+64);
        }
        for(j = i;j >= 1;j--){
            printf("%c",j+64);
        }
        printf("\n");
    }
//Loop for printing the right pattern.
    for(i = 7;i >= 1;i--){
        for(j = i;j >= 1;j--){
            printf("%c",j+64);
        }
        printf("\n");
    }
    return 0;
}