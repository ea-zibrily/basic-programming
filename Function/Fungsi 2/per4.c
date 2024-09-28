#include <stdio.h>
#define pi 3.14159 //mendefinisikan nilai pi

float radian (float x); //prototype fungsi radian
float drjt; //variabel global/extern

int main(){
    float rad; //deklarasi variabel

    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Fungsi 2 - Percobaan 4\n");
    printf("=====================================\n");

    printf("Masukkan derajat: ");
    scanf("%f", &drjt);

    rad = radian(drjt);

    return 0;
}
//membuat fungsi menu dengan parameter float x
float radian (float x){
    float rad;
    rad = drjt/180.0f*pi;
    printf("Hasil konversi Derajat ke Radian adalah %f", rad);
    return rad;
}


/*
4.  a. Definisikan sebuah fungsi radian() yang berfungsi untuk mengkonversi
    besaran sudut dari derajat ke radian dengan rumus sbb : rad = drjt / 180.0f * PI.
    Fungsi tersebut memiliki sebuah parameter yaitu derajat yang akan dikonversi,
    dan memiliki sebuah return value berupa hasil konversi dalam radian.
    b. Tulislah prototipe fungsi untuk fungsi tersebut.
    c. Buat function main untuk memanggil function radian(), setelah sebelumnya
    meminta masukan nilai derajat yang akan dikonversi.
    d. Definisikan PI sebagai sebuah konstanta yang bernilai : 3.14159f
*/