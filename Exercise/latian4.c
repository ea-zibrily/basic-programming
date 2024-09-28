#include <stdio.h>
#define perjam 200000

int main(){

    char nama_penyewa [60], alamat [120];
    int telp, lama_sewa, total_biaya;

    printf("SEWA ALAT ELEKTRONIK HANA");
    printf("\n====================\n");

    printf("Data Penyewa\n");
    printf("Nama Penyewa: ");
    scanf("%s", &nama_penyewa);
    printf("Alamat: ");
    scanf("%s", &alamat);
    printf("No. Telepon: ");
    scanf("%d", &telp);
    printf("Lama Sewa: ");
    scanf("%d", &lama_sewa);

    total_biaya = perjam * lama_sewa;

    printf("====================\n");
    printf("Total Biaya Sewa\n");
    printf("Lama Sewa: %d\n", lama_sewa);
    printf("Total Biaya: %d", total_biaya);

    return 0;

}
/* Koversi F ke C
#include <stdio.h>
#define Temperatur 32.00
#define Per 9.0/5.0

int main(){
    float F, C;

    printf("Konversi Fahrenheit ke Celcius\n");
    printf("Masukkan Celcius: ");
    scanf("%f", &C);
    F = (Per*C) + Temperatur;

    printf("Hasil Konversi: %.2f", F);
    return 0;

    Sewa Alat
    Buatlah source code dari ilustrasi berikut;
Sebuah studio musik, dengan nama studio musik Al Izzah menyewakan alat-alat musik
dengan tarif 1 jam pertama sebesar Rp 200.000,- yang merupakan tarif tetap untuk
setiap penyewaan. Untuk tarif jam berikutnya adalah 25% dari tarif tetap. Hitung berapa
total yang harus dibayar untuk setiap penyewaan lebih dari 1 jam?
*/