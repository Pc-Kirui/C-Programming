#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    int i,count;
    count = i = 0;
    printf("Enter name:");
    gets(name);
    //count = strlen(name);

    while(name[i] != '\0'){
        count++;
        i++;
    }
    puts(name);
    printf("Length of the string is %d",count);
    return 0;
}