#include <stdio.h>

float konversi (char y, char z, float x); //protoype fungsi konversi
//variabel global/extern
float sumber;
char asal, tujuan;

int main(){
    float konv; //deklarasi variabel

    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Fungsi 2 - Percobaan 5\n");
    printf("=====================================\n");

    printf("Masukkan sumber suhu: ");
    scanf("%f", &sumber);
    printf("Masukkan satuan asal (C/F/R): ");
    scanf(" %c", &asal);
    printf("Masukkan satuan tujuan (C/F/R): ");
    scanf(" %c", &tujuan);

    konv = konversi(asal,tujuan,sumber); //memanggil fungsi konversi

    return 0;
}

//membuat fungsi menu dengan parameter char y, char z, float x
float konversi (char y, char z, float x){
    float konver;
    //menggunakan if else untuk menentukan pilihan konversi
    if (asal=='C' && tujuan=='F')
    {
        konver=((9/5)*sumber)+32;
    }
    else if (asal=='C' && tujuan=='R')
    {
        konver=(4/5)*sumber;
    }
    else if (asal=='R' && tujuan=='C')
    {
        konver=(5/4)*sumber;
    }
    else if (asal=='R' && tujuan=='F')
    {
        konver=((9/4)*sumber)+32;
    }
     else if (asal=='F' && tujuan=='C')
    {
        konver=(5/9)*(sumber-32);
    }
    else if (asal=='F' && tujuan=='R')
    {
        konver=(4/9)*(sumber-32);
    }
    
    printf("Hasil konversinya adalah %.3f", konver);
    return konver;
}

/*
5.  a. Definisikan sebuah fungsi float konversi(suhu, asal, tuj), untuk
    mengkonversikan suhu dari Celsius ke Fahrenheit, Celsius ke Reamur,
    Fahrenheit ke Celsius, Fahrenheit ke Reamur, Reamur ke Celsius, dan Reamur
    ke Fahrenheit. Dimana suhu adalah suhu sumber, asal adalah satuan awal suhu
    yang akan dikonversi dan tuj adalah satuan hasil konversi
    b. Tulislah prototipe fungsi untuk fungsi tersebut.
    c. Buat function main() untuk memanggil function konversi(), setelah
    sebelumnya meminta masukan nilai suhu, satuan asal dan satuan tujuannya.
    Contoh tampilan:
    Masukkan suhu sumber = 100
    Masukkan satuan asal = C
    Masukkan satuan tujuan = R
    Hasil konversi suhu 100 C = 80 R
*/