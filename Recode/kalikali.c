#include <stdio.h>

int main(){
    int a, b, pilihan, jumlah, kurang, kali;
    float bagi;
    char pilih='y';

    printf("===============================\n");
    printf("Code by Hana Zibrily - GTA'09\n");
    printf("Kalkulator Sederhana ya ges ya\n");
    printf("===============================\n");

    do{ 
    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%d", &b);

    printf("\nMenu Matematika yang tersedia\n");
    printf("(1) Penjumlahan\n");
    printf("(2) Pengurangan\n");
    printf("(3) Pembagian\n");
    printf("(4) Perkalian\n");

    printf("\nSilahkan memilih menu matematika: ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
        case 1:
            jumlah = a+b;
            break;
        case 2:
            kurang = a-b;
            break;
        case 3:
            bagi = (float)a-(float)b;
            break;
        case 4:
            kali = a*b;
            break;
        default:
            printf("Menu yang anda pilih tidak tersedia!");
            break;
    }
    printf("Hasilnya adalah %d", jumlah, kurang, bagi, kali);
    printf("\nApakah anda ingin menghitung kembali?(y/n): ");
    scanf(" %c", &pilih);

    } while (pilih=='y'||'Y');

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