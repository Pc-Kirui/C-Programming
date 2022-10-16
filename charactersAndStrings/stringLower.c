//program to convert string to lowercase or uppercase.
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char name[30];
    printf("Enter name.\n");
    gets(name);

    //strlwr(name);
    for(i = 0;name[i] != '\0';i++){
        if(name[i] >= 'A' && name[i] <= 'Z'){
            name[i] = name[i] + 32;
        }
    }
    printf("string in lowercase is: %s",name);
    return 0;
}