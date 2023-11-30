/*Program to read an array of 10 integers and count total no. of even and odd numbers*/

#include <stdio.h>

int main()
{
    int i, even, odd, a[10];

    //initialize array at runtime
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    //print all the elements of the array
    for (i = 0; i < 10; i++)
        printf("Array element at index %d is %d\n", i, a[i]);

    //determine if elements in array are odd or even
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
            printf("Element %d is an even number, even numbers are %d in total\n", a[i], even);
        }
        else
        {
            odd++;
            printf("The element %d is odd, odd numbers are %d in total\n", a[i], odd);
        }
    }

    return 0;
}