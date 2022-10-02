//cube a variable using call by reference with a pointer argument
#include<stdio.h>

int cubeByReference(int *nPtr);
int main()
{
    int number = 5;

    printf("The original value of the number is %d\n",number);
    cubeByReference(&number);

    printf("The new value of the number is %d\n",number);
    return 0;
}
int cubeByReference(int *nPtr){
    *nPtr = *nPtr * *nPtr * *nPtr;
    return *nPtr;
}