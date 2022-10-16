#include<stdio.h>
int main()
{
    char name[30];
    printf("Enter name:");
    //scanf("%s",name);
    //printf("%s",name);

    gets(name);
    printf("%.5s\n",name);
    printf("%10.5s\n",name);
    printf("%s",&name[3]);
    puts(name);
    puts(name);
    return 0;
}