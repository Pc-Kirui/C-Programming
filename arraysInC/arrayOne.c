// create an array of size n dynamically, and read the values from stdin. Iterate the array calculating the
// sum of all elements. Print the sum and free the memory where the array is stored.
// While it is true that you can sum the elements as they are read, without first storing them to an array,
// but you will not get the experience working with an array. Efficiency will be required later

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, i, sum;
    sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements of the array.\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", arr);
        sum += *(arr);
    }
    printf("Sum = %d", sum);
    free(arr);
    return 0;
}