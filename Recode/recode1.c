#include <stdio.h>

int main(){
    int a, b, total_harga;

    printf("Welcome to WHYY Studio Store!\n");
    printf("==============================\n");

    printf("Daftar produk yang tersedia: \n");
    printf("1. Srobottt: Casual Game (101)\n");
    printf("2. Insomnia: Ngantuk Cuy Bjir (102)\n");

    printf("\nMasukkan kode produk yang ingin dibeli: ");
    scanf("%d", &a);

    printf("==============================\n");
    if (a == 101)
    {
        printf("Nama game: Srobottt: Casual Game\n");
        printf("Genre: Casual\n");
        printf("Harga: Rp. 15000\n");

        printf("Jumlah yang ingin dibeli: ");
        scanf("%d", &b);
        total_harga = 15000*b;
        printf("Total Harga: Rp. %d", total_harga);
        printf("==============================\n");
        printf("\n Terima kasih sudah membeli game kami");
    }
    if (a == 102)
    {
        printf("Nama game: Insomnia: Ngantuk Cuy Bjir\n");
        printf("Genre: Casual\n");
        printf("Harga: Rp. 17500\n");

        printf("Jumlah yang ingin dibeli: ");
        scanf("%d", &b);
        total_harga = 17500*b;
        printf("Total Harga: Rp. %d", total_harga);
        printf("==============================\n");
        printf("\n Terima kasih sudah membeli game kami");
    }
    else if (a != 101 && 102)
    {
        printf("GA TERSEDIA COK\n");
        printf("makasi -admin");
    }

    return 0 ;
}