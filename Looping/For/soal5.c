#include <stdio.h>

int main(){
    int i, bilangan; //deklarasi variabel

    printf("Menampilkan bilangan ganjil\n");
    printf("===========================\n");
    printf("Masukkan bilangan ke-n: ");
    scanf("%d", &bilangan);

    //menggunakan fungsi loop for
    for (i=1; i<=bilangan; i+=2) //eksp1,eksp2,eksp3
    {
        printf("%d ", i);
    }
    return 0;
}

/*
Gunakan loop for untuk membuat program sebagai berikut:
input : n
output : 1 3 5 7 … m ( m = bilangan ganjil ke n)
*/