//using strcat and strncat
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20] = "Happy ";
    char s2[] = "New Year";
    char s3[40] = "";

    printf("s1 = %s\ns2 = %s\n",s1,s2);
    strcat(s1,s2);
    printf("strcat(s1,s2) = %s\n",s1);

    //concatenate the first 6 characters of s1 to s3.place '\0' after last character.
    strncat(s3,s1,6);
    printf("strncat(s3, s1, 6) = %s\n",s3);

    //concatenate s3 to s1
    strcat(s3,s1);
    printf("strcat(s3,s1) = %s\n",s3);
    return 0;
}