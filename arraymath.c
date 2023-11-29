/*C program to calculate the sum and average of a range of input from user to array
and print the results to the standard output. Also print elements of the array*/

#include <stdio.h>

int main()
{
    int i, sum;
    float avg, marks[5];

    printf("Enter the marks of your 5 subjects: ");
    for (i = 0; i < 5; i++)
        scanf("%f", &marks[i]);

    sum = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
    avg = sum/5.0;

    for (i = 0; i < 5; i++)
        printf("Array element at index %d is %d\n", i, marks[i]);

    printf("Sum of the elements in the array is: %d\n", sum);
    printf("Average of the elements in the array is\n: %f", avg);
    
    return (0);
}