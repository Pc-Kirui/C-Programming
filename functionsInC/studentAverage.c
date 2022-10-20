/*function qualityPoints that inputs students average and returns grade*/
#include<stdio.h>
int qualityPoints(int average);
int main()
{
    int average,grade;
    printf("Enter student's average between 0 to 100.\n");
    scanf("%d",&average);

    grade = qualityPoints(average);
    printf("Grade = %d",grade);
    return 0;
}
int qualityPoints(int average){

    int grade;
    if(average >= 90 && average <= 100){
        grade = 4;
    }
    else if(average <= 89 && average >= 80){
        grade = 3;
    }
    else if(average <= 79 && average >= 70){
        grade = 2;
    }
    else if(average <= 69 && average >= 60){
        grade = 1;
    }
    else{
         grade = 0;
    }
    return grade;
}