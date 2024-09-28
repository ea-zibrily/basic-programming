#include <stdio.h>

int main(){
    float bil1, bil2, hasil_bagi;

    printf("Pembagi Bilangan 1 dan 2\n");
    printf("=========================\n");

    printf("Masukkan bilangan 1: ");
    scanf("%f", &bil1);
    printf("Masukkan bilangan 2: ");
    scanf("%f", &bil2);

    if (bil2 == 0)
    {
        printf("Division by Zero");
    }
    else{
        hasil_bagi = bil1/bil2;
        printf("Hasil pembagian adalah: %.3f", hasil_bagi);
    }
    return 0;
}