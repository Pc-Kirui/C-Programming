//sorting program using function pointers
#include<stdio.h>
#define SIZE 10

void bubble(int array[],const int size,int (*compare)(int a,int b));
int ascending(int a,int b);
int descending(int a,int b);

int main()
{
    int i,order;
    int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};

    printf("Enter 1 to sort in ascending order,\n"
           "Enter 2 to sort in descending order:");
    scanf("%d",&order);

    printf("\nData items in original order\n");

    for(i = 0;i < SIZE;i++){
        printf("%5d",a[i]);
    }
    //sorting the array
    if(order == 1){
        bubble(a,SIZE,ascending);
        printf("\nData items in ascending order\n");
    }
    else{
        bubble(a,SIZE,descending);
        printf("\nData items in descending order\n");
    }

    //output sorted array
    for(i = 0;i < SIZE;i++){
        printf("%5d",a[i]);
    }
    printf("\n");
    return 0;
}
void bubble(int array[],const int size,int (*compare)(int a,int b)){
    int pass;
    int i;

    void swapp(int *element1Ptr,int *element2Ptr);

    for(pass = 1;pass < size;pass++){
        for(i = 0;i < size - 1;i++){
            if((*compare)(array[i],array[i+1])){
                swapp(&array[i], &array[i+1]);
            }
        }
    }
}
void swapp(int *element1Ptr,int *element2Ptr){
    int hold;
    hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}
int ascending(int a,int b){
    return a > b;
}
int descending(int a,int b){
    return a < b;
}