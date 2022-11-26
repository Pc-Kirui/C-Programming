//declaring and initializing structures
#include<stdio.h>

struct student
{
    int rollNo;
    char name[20];
    float marks;
}s3 = {3 };

int main()
{
    //initializing the structure
    struct student s1 = {1, "Patrick", 90.2};
    struct student s2;

    printf("Enter details of student2.\n");
    scanf("%d %s %f",&s2.rollNo,s2.name,&s2.marks);

    printf("Information for student1.\n");
    printf("%d %s %f\n",s1.rollNo,s1.name,s1.marks); 

    printf("\nInformation for student2.\n");
    printf("%d %s %f\n",s2.rollNo,s2.name,s2.marks);

    printf("\nInformation for student3.\n");
    printf("%d %s %f\n",s3.rollNo,s3.name,s3.marks);

    return 0;    
}