#include <stdio.h>

int main(){
    //deklarasi variabel
    char huruf;
    int a = 0, kapital = 0, kecil = 0, angka = 0, jumlah;

    printf("Masukkan kalimat yang diinginkan:\n");
    //menggunakan fungsi loop while
    /*menggunakan getchar agar dapat diproses saat di enter
    jika menggunakan scanf("%c", &huruf), data yang masuk tidak
    akan diproses dan langsung false*/ 
    while ((huruf=getchar())!='\n')
    {
     if(huruf==' ')
       a++;
       //menggunakan nilai desimal dari karakter
    else if (huruf>=65 && huruf<=90)
        kapital++;
    else if (huruf>=92 && huruf<=122)
        kecil++;
    else if (huruf>=48 && huruf<=57)
        angka++;
    //proses jumlah karakter
    jumlah=a+kapital+kecil+angka;
    }
    printf("=========================\n");
    printf("Jumlah karakter adalah %d\n", jumlah);
    printf("Jumlah spasi adalah %d\n", a);
    printf("Jumlah huruf kapital adalah %d\n", kapital);
    printf("Jumlah huruf kecil adalah %d\n", kecil);
    printf("Jumlah angka adalah %d", angka);

    return 0;
}