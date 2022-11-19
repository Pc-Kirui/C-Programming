/* Towers of Hanoi problem*/
#include<stdio.h>

void towersOfHanoi(int num, char, char, char);

int main(){
    int num;
    char source = 'A';
    char temp = 'B';
    char destination = 'C';
    printf("Enter the number of disks: ");
    scanf("%d",&num);
    
    printf("Series of Moves.\n");
    towersOfHanoi(num,source,temp,destination);
    return 0;
}
void towersOfHanoi(int num, char source, char temp, char destination){
    
    //base condition
    if(num == 1){
        printf("%c to %c\n",source,destination);
    }
    else{
        towersOfHanoi(num-1,source,destination,temp);

        towersOfHanoi(1,source,temp,destination);

        towersOfHanoi(num-1,temp,source,destination);
    }
}
    