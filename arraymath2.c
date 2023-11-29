/*C program to initialize array with student marks at runtime
Print all the elements of the array to the standard output
Compute sum of all array elements, using a loop, and print result to standard output
Compute avg of all array elements and print result ot standard output*/

#include <stdio.h>

int main()
{
    int i, sum = 0, marks[i];
    float avg;

    //initialize the array
    printf("Enter the marks of the 5 subjects taken: ");
    for (i = 0; i < 0; i++)
        scanf("%d", &marks[i]);

    //print the elements of the array
    for (i = 0; i < 0; i++)
        printf("Array element at index %d is %d\n", i,marks[i]);

    //compute the sum of all elements in the array
    for (i=0; i < 5; i++)
        sum = sum + marks[i];

    avg = sum/5.0;

    printf("The sum of the elements is: %d\n", sum);
    printf("The average of the elements is: %f\n", avg);

}