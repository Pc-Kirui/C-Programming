//reversing a string in c
#include<stdio.h>
#include<string.h>
int main()
{
    int len,j,i = 0;
    char ch;
    char s1[20];
    printf("Enter string\n");
    gets(s1);

    len = strlen(s1);
    printf("Length of string s1 is %d\n",len);
   /* while(i < len/2){
        ch = s1[i];
        s1[i] = s1[len - 1 -i];
        s1[len - 1 - i] = ch;
        i++;
    }*/
    //strrev(s1);
    for(i = 0,j = len - 1;i < j;i++,j--){
        ch = s1[i];
        s1[i] = s1[len - 1 -i];
        s1[len - 1 -i] = ch;
    }
    printf("Reversed string is %s\n",s1);
    return 0;
}