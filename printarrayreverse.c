//C program to initialize array at runtime and print elements in reverse

#include <stdio.h>

int main()
{
    int a[5], i;
    printf("Enter the elements of the array");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    //print the elements of the array in reverse
    for(i = 5; i >= 0; i--)
        printf("Array element at %d is %d\n", i, a[i]);
}