#include <stdio.h>

int main() {

    printf("==>> Bino Dan Mochi <<==\n\n");
    int valid_operator = 1;
    char operator;
    float number1, number2, result;

    printf("Masukkan 2 bilangan & sebuah operator\n");
    printf("format : number1 operator1 number2\n\n");
    scanf("%f %c %f", &number1, &operator, &number2);
    switch(operator) {
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1 / number2;
            break; 
        case '+':
            result = number1 + number2;
            break; 
        case '-':
            result = number1 - number2;
            break;
        default :
            valid_operator = 0;
    }
    if (valid_operator){
        printf("\n%f %c %f is %f\n", number1, operator, number2, result);
    }
    else{
        printf("Invalid operator!\n");
    }
    return 0;
}
