#include <stdio.h>
int main()
{
    float res, num;
    char op;
    printf("enter 1st operand : ");
    scanf("%f", &res);
START:
    printf("enter operator : ");
    scanf(" %c", &op);
    if (op == '=')
    {
        goto END;
    }
    else
    {
        printf("enter 2st operand : ");
        scanf("%f", &num);
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
    printf("result is %f", res);
    return 0;
}

// #include <stdio.h>
// int main() {
//     float num1, num2, result;
//     char operator;
//     int choice;
//     do {
//         printf("Simple Calculator\n");
//         printf("1. Addition\n");
//         printf("2. Subtraction\n");
//         printf("3. Multiplication\n");
//         printf("4. Division\n");
//         printf("5. Exit\n");
//         printf("Enter your choice (1-5): ");
//         scanf("%d", &choice);
//         if (choice >= 1 && choice <= 4) {
//             printf("Enter first number: ");
//             scanf("%f", &num1);
//             printf("Enter operator (+, -, *, /): ");
//             scanf(" %c", &operator);
//             printf("Enter second number: ");
//             scanf("%f", &num2);
//             switch (operator) {
//                 case '+':
//                     result = num1 + num2;
//                     printf("%.2f + %.2f = %.2f\n", num1, num2, result);
//                     break;
//                 case '-':
//                     result = num1 - num2;
//                     printf("%.2f - %.2f = %.2f\n", num1, num2, result);
//                     break;
//                 case '*':
//                     result = num1 * num2;
//                     printf("%.2f * %.2f = %.2f\n", num1, num2, result);
//                     break;
//                 case '/':
//                     if (num2 != 0) {
//                         result = num1 / num2;
//                         printf("%.2f / %.2f = %.2f\n", num1, num2, result);
//                     } else {
//                         printf("Error! Division by zero is not allowed.\n");
//                     }
//                     break;
//             }
//         } else if (choice == 5) {
//             printf("Exiting the calculator. Goodbye!\n");
//         } else {
//             printf("Invalid choice. Please choose a valid option.\n");
//         }
//     } while (choice != 5);
//     return 0;
// }