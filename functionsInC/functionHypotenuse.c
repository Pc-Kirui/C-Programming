//Program to find the hypotenuse of a right angle triangle.
//Given two sides
#include<stdio.h>
#include<math.h>

//function prototype
double hypotenuse(double side1,double side2);
int main()
{
    double side1,side2,length;
    printf("Enter the two sides of the triangle.\n");
    scanf("%lf%lf",&side1,&side2);

    length = hypotenuse(side1,side2);
    printf("The length of hypotenuse is %.2lf\n",length);

    return 0;
}
double hypotenuse(double side1,double side2){
    return sqrt((side1*side1) + (side2*side2));
}