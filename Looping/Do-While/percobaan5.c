#include <stdio.h>

int main(){
    int a, b, total=0; //deklarasi variabel

    printf("Program Menghitung Bilangan tanpa Operator\n");
    printf("=============================\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &a);
    //menggunakan fungsi looping do-while
    do
    {
        b=a%10;
        a=a/10;
        total+=b;
    } while (a!=0);

    printf("Hasil hitungannya adalah %d", total);
    return 0;
}