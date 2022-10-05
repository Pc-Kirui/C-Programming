//double pointer is a pointer that stores the address of another pointer
#include<stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    printf("a = %d\n",a);
    printf("a = %d\n",*p);
    printf("a = %d\n",**q);
    printf("Address of p is %x %x\n",&p,q);
    return 0;

}