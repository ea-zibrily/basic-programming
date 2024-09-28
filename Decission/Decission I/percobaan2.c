#include <stdio.h>

int main(){
    int x, diskon;

    printf("Menentukan besar Potongan Harga\n");
    printf("=============================\n");

    printf("Masukkan total pembelian: ");
    scanf("%d", &x);

    if ( x >= 100000)
    {
        diskon = (x*5)/100;
        x -= diskon;
        printf("Total akhir pembelian anda adalah %d\n", x);
    }
    else{
        printf("Total akhir pembelian anda adalah %d\n", x);
    }
    return 0;
}
/*
Buat program menggunaan pernyataan if adalah untuk menentukan besarnya potongan
harga yang diterima oleh seorang pembeli, berdasarkan kriteria :
- tidak ada potongan harga jika total pembelian kurang dari Rp. 100.000 (dalam hal ini
potongan harga diinisialisasi dengan nol).
- bila total pembelian lebih dari atau sama dengan Rp. 100.000, potongan harga yang
diterima dirubah menjadi sebesar 5% dari total pembelian.
 Contoh input = 50.000
 Output = Total pembelian adalah Rp. 50.000
*/