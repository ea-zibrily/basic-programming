#include <stdio.h>

int main(){
    int i, bilangan; //deklarasi variabel

    printf("Menampilkan Bilangan Ganjil(+) dan Genap(-)\n");
    printf("===========================================\n");
    printf("Masukkan bilangan ke-n: ");
    scanf("%d", &bilangan);

    //menggunakan fungsi loop for
    for (i=1; i<=bilangan; i++) //eksp1,eksp2,eksp3
    {
        //fungsi if untuk menentukan "-" bilangan
        if (i%2!=0)
        printf("%d ", i);

        if (i%2==0)
        printf("-%d ", i);        
    }
    return 0;
}

/*
6. Gunakan loop for untuk membuat program sebagai berikut:
input : n
output : 1 -2 3 -4 5 -6 7 -8 … n
*/