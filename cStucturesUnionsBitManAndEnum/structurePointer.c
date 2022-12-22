// pointer to structure/structure pointer
#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
void main()
{
    struct student s1 = {1, "Patrick", 90};
    struct student *ptr = &s1;
    printf("Information for S1:\n");
    printf("%d,%s,%f\n", ptr->rollno, ptr->name, ptr->marks);
    printf("%d,%s,%f", (*ptr).rollno, (*ptr).name, (*ptr).marks);
    printf("\n");
}