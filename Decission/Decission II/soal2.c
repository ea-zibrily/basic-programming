#include <stdio.h>

int main(){//deklarasi variabel
    int a, b, pilihan, jumlah, kurang, kali;
    float bagi;

    printf("Kalkulator Sederhana\n");
    printf("===================================\n");
    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");

    scanf("%d", &b);
    printf("===================================\n");
    printf("Menu Matematika yang tersedia\n");
    printf("(1) Penjumlahan\n");
    printf("(2) Pengurangan\n");
    printf("(3) Pembagian\n");
    printf("(4) Perkalian\n");

    printf("\nSilahkan memilih menu matematika: ");
    scanf("%d", &pilihan);

    printf("===================================\n");
    if (pilihan == 1) //menggunakan fungsi if ... else if
    {
        jumlah = a+b;   printf("Hasilnya adalah %d", jumlah);
    }
    else if (pilihan == 2)
    {
        kurang = a-b;   printf("Hasilnya adalah %d", kurang);
    }
    else if (pilihan == 3)
    {
        bagi = (float)a/(float)b;   printf("Hasilnya adalah %.2f", bagi);
    }
    else if (pilihan == 4)
    {
        kali = a*b;   printf("Hasilnya adalah %d", kali);
    }
    else
    {
        printf("Pilihan anda salah!");
    }

    return 0;
}
/*
2. DENGAN MENGGUNAKAN PERNYATAAN ELSE..IF , BUATLAH PROGRAM
KALKULATOR SEDERHANA, UNTUK MENDAPATKAN TANPILAN HASIL
SEBAGAI BERIKUT :
MASUKKAN BILANGAN PERTAMA : 5
MASUKKAN BILANGAN KEDUA : 3
MENU MATEMATIKA
1. PENJUMLAHAN
2. PENGURANGAN
3. PEMBAGIAN
4. PERKALIAN
MASUKKAN PILIHAN ANDA : 4
HASIL OPERASI TERSEBUT = 15
*/