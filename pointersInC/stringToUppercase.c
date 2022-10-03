//converting lowercase letters to uppercase letters 
//using non-constant pointer to non-constant data
#include<stdio.h>
#include<ctype.h>

void convertToUppercase(char *sPtr);
int main()
{
    char string[] = "characters and $32.98";

    printf("The string before conversion is: %s\n",string);
    convertToUppercase(string);
    printf("The string after conversion is: %s\n",string);

    return 0;
}
void convertToUppercase(char *sPtr){
    while(*sPtr != '\0'){
        if(islower(*sPtr)){
            *sPtr = toupper(*sPtr);
        }
        ++sPtr;
    }
}