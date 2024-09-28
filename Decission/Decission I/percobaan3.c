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
        printf("Diskon yang anda dapat adalah %d", diskon);
    }
    else{
        printf("Total akhir pembelian anda adalah %d\n", x);
        printf("Maaf anda tidak mendapat diskon");
    }
    return 0;
}