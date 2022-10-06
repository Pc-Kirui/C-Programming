//Using subscripting and pointer notation with arrays
#include<stdio.h>
int main()
{
    int array[] = {10,20,30,40};
    int i;
    int *arrayPtr = array;
    int offset;

    printf("Array printed with array subscript notation.\n");
    for(i = 0;i < 4;i++){
        printf("array[%d] = %d\n",i,array[i]);
    }

    //output array using name and pointer/offset notation
    printf("\npointer/offset notation where pointer is array name.\n");
    for(offset = 0;offset < 4;offset++){
        printf("*(array + %d) = %d\n",offset,*(array + offset));
    }

    //output array using arrayPtr and array subscript notation
    printf("\nPointer subscript notation.\n");
    for(i = 0;i < 4;i++){
        printf("arrayPtr[%d] = %d\n",i,arrayPtr[i]);
    }

    //output array using arrayPtr and pointer/offset notation
    printf("\nPointer/offset notation\n");
    for(offset = 0;offset < 4;offset++){
        printf("*(arrayPtr + %d) = %d\n",offset,*(arrayPtr + offset));
    }
    return 0;
}