#include <stdio.h>

int main()//deklarasi variabel
{ 
    int valid_operator = 1;
    float number1, number2, number3, result;
    char operator;

    printf("Masukkan 2 Buah Bilangan & Sebuah Operator!\n");
    printf("Dengan format: number1 - operator - number\n");
    printf("============================================\n");
    printf("Masukkan disini: ");
    scanf("%f %c %f", &number1, &operator, &number2);

    switch (operator) //menggunakan fungsi switch dengan ekspresi "operator"
    {
    case '*':
        result = number1*number2;
        break;
    case '/':
        result = number1/number2;
        break;
    case '+':
        result = number1+number2;
        break;
    case '-':
        result = number1-number2;
        break;
    default://hasil akhir jika data "operator" tidak sesuai case '*' - '-'
        valid_operator = 0;
    }
    if (valid_operator)
    {
        printf("\n%.2f %c %.2f is %.2f\n", number1, operator, number2, result);
    }
    else{
        printf("Invalid operator!\n"); 
    }
    return 0;
}

/*
MAIN() {
INT VALID_OPERATOR = 1; //VALID_OPERATOR DIINISIALISASI DG LOGIKA 1 CHAR OPERATOR;
FLOAT NUMBER1, NUMBER2, RESULT;

PRINTF("MASUKKAN 2 BUAH BILANGAN & SEBUAH OPERATOR\NDENGAN FORMAT : NUMBER1 OPERATOR
NUMBER2\N\N"); 

SCANF("%F %C %F", &NUMBER1, &OPERATOR, &NUMBER2);
IF(OPERATOR == '*')
RESULT = NUMBER1 * NUMBER2;
ELSE IF(OPERATOR == '/')
RESULT = NUMBER1 / NUMBER2;
ELSE IF(OPERATOR == '+')
RESULT = NUMBER1 + NUMBER2;
ELSE IF(OPERATOR == '-')
RESULT = NUMBER1 - NUMBER2;
ELSE
VALID_OPERATOR = 0;
IF(VALID_OPERATOR)
PRINTF("\N%G %C %G IS %G\N", NUMBER1, OPERATOR, NUMBER2, RESULT );
ELSE
PRINTF("INVALID OPERATOR!\N");
}
*/