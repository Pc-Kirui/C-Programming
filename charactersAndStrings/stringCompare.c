//Program to compare two strings
#include<stdio.h>
#include<string.h>
int main()
{
    int value,i,flag = 0;
    char s1[30];
    char s2[30];
    printf("Enter string 1:\n");
    gets(s1);
    printf("Enter string 2:\n");
    gets(s2);
    //value = strcmp(s1,s2);

    for(i = 0;s1[i] != '\0' || s2[i] != '\0';i++){
        if(s1[i] != s2[i]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Not Equal.\n");
    }
    else{
        printf("Equal.\n");
    }
    return 0;
}