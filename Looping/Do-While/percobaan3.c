#include <stdio.h>

int main(){
    int n, a=1; //deklarasi variabel

    printf("Menampilkan Bilangan Ganjil\n");
    printf("==========================\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    printf("Hasil bilangan: ");
    //menggunakan fungsi loop do-while
    do
    {
        a+=2;
        //menggunakan or untuk menentukan nilai untuk diskip (continue)
        if (a%7==0 || a%11==0) 
        {
            continue;
        }
        if (a>100)
        {
           break; //untuk menghentikan program
        }
        printf("%d ", a);
    } while (a<n);

    return 0;
}

/*
Dengan menggunakan pernyataan break dan continue, buatlah program untuk
membuat program dengan input n, dan output, bilangan ganjil kecuali kelipatan 7
dan 11 mulai dari 1 sampai < n atau bilangan tersebut <100
*/