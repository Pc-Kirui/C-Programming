//Function that returns the smallest of three floating point numbers.
#include<stdio.h>
//float smallestNum(float a,float b,float c);
int main()
{
    int x,y,z,small;
    printf("Enter three floating point numbers.\n");
    scanf("%f%f%f",&x,&y,&z);

    small = (x < y && x < z)? x :(y < x && y < z) ? y:z;
    printf("The smallest number is %f\n",small);
    return 0;
}