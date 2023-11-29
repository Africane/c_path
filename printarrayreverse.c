//C program to initialize array at runtime and print elements in reverse

#include <stdio.h>

int main()
{
    int a[5], i;
    printf("Enter the elements of the array");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    //print the elements of the array in reverse
    for(i = 4; i >= 0; i--)
        printf("Array element in reverse at index %d is %d\n", i, a[i]);
}