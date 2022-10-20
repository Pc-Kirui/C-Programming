//using getchar and puts
#include<stdio.h>
int main()
{
    char c;
    int i;
    char sentence[80];

    puts("Enter a line of text:");
    while((c = getchar()) != '\n'){
        sentence[i++] = c;
    }
    sentence[i] = '\0';
    puts("\n The text entered was:\n");
    puts(sentence);

    return 0;
}