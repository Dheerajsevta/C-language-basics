//program to find Sum and Average of a list of number by using array
#include <stdio.h>
void main()
{
    int n;
    printf("enter number of element in list ");
    scanf("%d", &n);
    //declaring array
    int abc[n];
    int sum = 0;
    //taking input of all elements of list (with for loop)
    printf("enter numbers\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &abc[i]);
        sum += abc[i];
    }
    //printing numbers
    for (int j = 0; j < n; j++)
    {
        printf(" numbers are  : %d\t", abc[j]);
    }
    //calculating Average and typecasting 
    float average = (float)sum / n;
    printf("\nThe Sum is %d\n", sum);
    printf("Average is %.2f", average);
}