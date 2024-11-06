//a program to find factorial of a number given by user 
#include <stdio.h>
void main(){
    int num , fact = 1;
    printf("enter number to find factorial\n");
    //taking input 
    scanf("%d",&num);
    //loop to calculate factorial
    for (int i = 1; i <= num; i++)
    {
        fact *= i ;
    
        
    }
    //printing factorial of number 
    printf("final factorial is = %d\n" , fact);
    
}
