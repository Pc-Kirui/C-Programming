//string concatenation
#include<stdio.h>
#include<string.h>
int main()
{
    int len1,len2,len3,i;
    char s1[30] = "Patrick";
    char s2[15] = "Kirui";
    //strcat(s1,s2);

    len1 = strlen(s1);
    len2 = strlen(s2);
    printf("Length of string s1 is %d\n",len1);
    printf("Length of string s1 is %d\n",len2);

    for(i = 0;i <= len2;i++){
        s1[len1 + i] = s2[i];
    }
    printf("String after concatenation is: %s\n",s1);
    len3 = strlen(s1);
    printf("Length of concatenated string is %d\n",len3);
    puts(s2);
    return 0;
}