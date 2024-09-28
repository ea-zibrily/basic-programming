#include <stdio.h>

int main(){
    int n, i, u=0; //deklarasi variabel

    printf("Mengurutkan Bilangan\n");
    printf("======================\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    printf("Hasilnya adalah ");
    //menggunakan nested loop while for
    for (i=0; i<=n; i++)
    {
        u++;
        u=u+i;
        printf("%d ", u);
    }

    return 0;
}

/*
Dengan menggunakan pernyataan nested loop, buatlah program berikut:
input: n
output:
0 1 3 6 10 15 21 28 …. Bilangan ke n

demgam menu y/t

#include <stdio.h>

int main(){
    int n, i, u=0; //deklarasi variabel
    char huruf='y';

    printf("Mengurutkan Bilangan\n");
    printf("======================\n");
    //menggunakan do-while untuk menu y/t
    do
    {
    printf("Masukkan bilangan: ");
    scanf("%d", &n);
    printf("Hasilnya adalah ");
    //menggunakan nested loop while for
    for (i=0; i<=n; i++)
    {
        u++;
        u=u+i;
        printf("%d ", u);
    }
        printf("\nApa anda ingin keluar? (y/t): ");
        scanf(" %c", &huruf);
        printf("================================\n");
    } while (huruf=='t');

    printf("Terima kasih telah menggunakan program ini :)");
    return 0;
}

*/