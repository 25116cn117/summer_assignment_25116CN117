#include <stdio.h>

int main() {
    char op;
    float num1, num2, result;

    printf("Operator daal + - * / : ");
    scanf("%c", &op);

    printf("2 number daal: ");
    scanf("%f %f", &num1, &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f", num1, num2, result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f", num1, num2, result);
            break;
            
        case '/':
            if(num2!= 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f", num1, num2, result);
            }
            else {
                printf("0 se divide nahi hota bhai");
            }
            break;
            
        default:
            printf("Galat operator");
    }

    return 0;
}