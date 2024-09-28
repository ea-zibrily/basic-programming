#include <stdio.h>

int main(){
    int n, i=1; //deklarasi variabel

    printf("Menampilkan Bilangan Ganjil\n");
    printf("===========================\n");
    printf("Masukkan bilangan ke-n: ");
    scanf("%d", &n);

    printf("\nHasil Pengulangan: ");
    //menggunakan fungsi loop do-while
    do
    {
        i+=2;
        if (i%3==0) //menggunakan if untuk menentukan nilai continue
        {
            continue;
        }
        printf("%d ", i);

    } while (i<n);

    return 0;
}

/*
Dengan menggunakan pernyataan continue, buatlah program yang dapat
menampilkan bilangan ganjil dari 1 sampai < n (n diinputkan), kecuali bilangan
ganjil tersebut kelipatan 3.
*/