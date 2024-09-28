#include <stdio.h>
#define pi 3.14 //menetapkan variabel tetap pi = 3.14

int main(){ //deklarasi variabel
    int pilih;
    float volume_kubus, luas_lingkaran, volume_silinder;
    float s, r, t;

    printf("Program Menghitung Bangun Ruang\n");
    printf("=================================\n");

    printf("Menu Hitungan yang tersedia\n");
    printf("\n(1) Menghitung Volume Kubus\n");
    printf("(2) Menghitung Luas Lingkaran\n");
    printf("(3) Menghitung Volume Silinder\n");

    printf("\nMasukkan kode menu yang dipilih (1-3): ");
    scanf("%d", &pilih);
    printf("=================================\n");

    switch (pilih) //menggunakan fungsi switch dengan ekspresi "pilih"
    {
    case 1:
        printf("Masukkan sisi kubus: ");
        scanf("%f", &s);
        volume_kubus = s*s*s;
        printf("Volume Kubus adalah %.2f", volume_kubus);
        break;//pembatas percase dalam switch
    case 2:
        printf("Masukkan jari-jari lingkaran: ");
        scanf("%f", &r);
        luas_lingkaran = pi*r*r;
        printf("Luas Lingkaran adalah %.2f", luas_lingkaran);
        break;
    case 3:
        printf("Masukkan jari-jari lingkaran: ");
        scanf("%f", &r);
        printf("Masukkan tinggi silinder: ");
        scanf("%f", &t);
        volume_silinder = pi*r*r*t;
        printf("Volume Silinder adalah %.2f", volume_silinder);
        break;
    default: //hasil akhir jika data "pilih" tidak sesuai case 1-3
        printf("Kode menu yang anda masukkan salah!");
        break;
    }
    return 0;
}
/*
BUATLAH PROGRAM UNTUK MENAMPILKAN MENU DAN MELAKUKAN PROSES SBB :
MENU : 1. MENGHITUNG VOLUME KUBUS
2. MENGHITUNG LUAS LINGKARAN
3. MENGHITUNG VOLUME SILINDER.

INPUT : PILIHAN USER (1, 2 ATAU 3)
JIKA PILIHAN = 1, MAKA :
INPUT : PANJANG SISI KUBUS
OUTPUT : VOLUME KUBUS (VOL = SISI3)
JIKA PILIHAN = 2, MAKA :
INPUT : PANJANG JARI-JARI LINGKARAN
OUTPUT : LUAS LINGKARAN (LUAS = 3.14 * R2)
JIKA PILIHAN = 3, MAKA :
INPUT : PANJANG JARI-JARI LINGKARAN & TINGGI SILINDER
OUTPUT : VOLUME SILINDER (VOL = 3.14 * R2 * T)
JIKA PILIHAN SELAIN 1, 2 & 3 (DEFAULT) : TAMPILKAN PESAN KESALAHAN.
PETUNJUK : GUNAKAN SWITCH-CASE
*/