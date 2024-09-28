#include <stdio.h>
#include <math.h> //memanggil <math.h> agar bisa menggunakan sqrt

int main(){ //deklarasi variabel
    float a, b, c, x1, x2, D, i;

    printf("Penghitung Diskriminan dan Mencari Akar-Akar dari persamaan Kuadrat\n");
    printf("========================================\n");

    printf("Persamaan Kuadrat: ax2 + bx + c = 0\n");
    printf("Masukkan nilai a: ");
    scanf("%f", &a);
    printf("Masukkan nilai b: ");
    scanf("%f", &b);
    printf("Masukkan nilai c: ");
    scanf("%f", &c);
    D = (b*b) - (4*a*c);

    printf("========================================\n");
    printf("Jumlah Diskriminan adalah: %.2f\n", D);

    if (D == 0) //menggunakan fungsi if ... else if
    {
       printf("Akar-akarnya adalah: \n");
       x1 = -b/2*a;  printf("(1) x1: %.2f\n", x1);
       x2 = -b/2*a;  printf("(2) x2: %.2f", x2);
    }
    else if (D > 0)
    {
        printf("Akar-akarnya adalah: \n");
        x1 = (-b + sqrt(D)) / 2*a;    printf("(1) x1: %.2f\n", x1);
        x2 = (-b - sqrt(D)) / 2*a;    printf("(2) x2: %.2f", x2);
    }
    else if (D < 0)
    {
        printf("Akar-akarnya adalah: \n");
        x1 = -b / 2*a + (sqrt(-D) / 2*a)*i;   printf("(1) x1: %.2fi\n", x1);
        x2 = -b / 2*a - (sqrt(-D) / 2*a)*i;   printf("(2) x2: %.2fi", x2);
    }
    else{
        printf("Tidak dapat menentukan Akar-Akar persamaan");
    }
    return 0;
}

/*
1. BUATLAH PROGRAM UNTUK MENGHITUNG DISKRIMINAN DAN MENCARI AKAR-AKAR DARI
PERSAMAAN KUADRAT : AX2 + BX + C = 0 , DENGAN KETENTUAN SBB :
D = B2 - 4AC
• JIKA D = 0 , MAKA TERDAPAT 2 AKAR REAL YANG KEMBAR, YAITU : X1 = X2 = -B / 2A
• JIKA D > 0 , MAKA TERDAPAT 2 AKAR REAL YANG BERLAINAN, YAITU :
X1 = (-B + SQRT(D)) / 2A
X2 = (-B - SQRT(D)) / 2A
• JIKA D < 0 , MAKA TERDAPAT 2 AKAR IMAGINAIR YANG BERLAINAN, YAITU :
X1 = -B / 2A + (SQRT(-D) / 2A) I
X2 = -B / 2A - (SQRT(-D) / 2A) I
INPUT : A, B, C (FLOAT)
OUTPUT : NILAI DISKRIMINAN SERTA NILAI AKAR-AKAR PERSAMAAN TSB (X1& X2).
PETUNJUK :
- UNTUK MENCARI AKAR DARI X, GUNAKAN : SQRT(X) YANG DIDEFINISIKAN PADA <MATH.H>.
- GUNAKAN ELSE IF
*/