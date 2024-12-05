//code for calculator using GOTO statements
#include <stdio.h>
int main()
{
    //declaring variables
    float res, num;
    char op;
    printf("enter 1st operand : ");
    scanf("%f", &res);
//making lable for future usage
START:
    printf("enter operator : ");
    scanf(" %c", &op);
    //checking operator 
    if (op == '=')
    {
        goto END;
    }
    else
    {
        printf("enter 2st operand : ");
        scanf("%f", &num);
        //updating and printing result of every calculation 
        switch (op)
        {
        case '+':
            res += num;
            printf("%f\n",res);
            break;
        case '-':
            res -= num;
            printf("%f\n",res);
            break;
        case '*':
            res *= num;
            printf("%f\n",res);
            break;
        case '/':
            res /= num;
            printf("%f\n",res);
            break;
        default:
            goto END;
            break;
        }
        goto START;
    }
END:
//printing final result
    printf("result is %f", res);
    return 0;
}

