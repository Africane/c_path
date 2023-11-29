#include <stdio.h>

void main()
{
    int i, a[5];
    printf("Enter the contents of the array: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("Array element at index %d is %d\n", i,a[i]);
    }
    
}