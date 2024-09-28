#include <stdio.h>

int main(){ //deklarasi varibael
    int angka;

    printf("Program Konversi Angka ke Huruf\n");
    printf("========================\n");

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    if (angka <= 40) //menggunakan fungsi if .. else if
    {
        printf("Anda mendapat huruf E");
    }
     else if (40 < angka && angka <= 55)
    {
        printf("Anda mendapat huruf D");
    }
    else if (55 < angka && angka <= 60)
    {
        printf("Anda mendapat huruf C");
    }
    else if (60 < angka && angka <= 80)
    {
        printf("Anda mendapat huruf B");
    }
    else if (80 < angka && angka <= 100)
    {
        printf("Anda mendapat huruf A");
    }
    else
    {
        printf("Nilai anda tidak memenuhi!");
    }
    return 0;
}

/*
BUAT PROGRAM UNTUK MENGKONVERSIKAN NILAI ANGKA KE NILAI HURUF.
PETUNJUK : NILAI_ANGKA<=40 = E
40<NILAI_ANGKA<=55 = D
55<NILAI_ANGKA<=60 = C
60<NILAI_ANGKA<=80 = B
80<NILAI_ANGKA<=100 = A
INPUT : NILAI_ANGKA = 62
OUTPUT : NILAI HURUF ADALAH B
*/