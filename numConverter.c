//program to convert decimal number to binary and Octal Based on the Radix provided
#include <stdio.h>
void main()
{
    int num, radix, i = 0;
    int remian[20];
    int count = 0;
    printf("enter number ");
    scanf("%d", &num);
    printf("enter radix of conversion  ");
    scanf("%d", &radix);
    while (num != 0)
    {
        remian[i] = num % radix;
        count++;
        num /= radix;

        i++;
    }

    for (int j = count - 1; j >= 0; j--)
    {
        printf("%d", remian[j]);
    }
}