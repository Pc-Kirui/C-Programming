#include<stdio.h>
size_t getSize(float *ptr);
int main()
{
    float array[20];

    printf("The number of bytes in the array is %d\n",sizeof(array));
    printf("The number of bytes returned by getsize is %d\n",getSize(array));
    return 0;
}
size_t getSize(float *ptr){
    return sizeof(ptr);
}