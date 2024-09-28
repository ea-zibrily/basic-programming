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

/*
No. 1

#include <stdio.h>

int main(){
    int n, i, u; //deklarsi variabel
    char huruf ='y';

    printf("Mengurutkan Bilangan\n");
    printf("=====================\n");
    //menggunakan do-while untuk mengulang menu y/t
    do
    {
      printf("Masukkan bilangan: ");
    scanf("%d", &n);
    //menggunakan nested loop for
    for (i=1; i<=n; i++)
    {
        for (u=1; u<=n; u++)
        {
            printf("%d  ", u);
        }
        printf("\n");
    }

    printf("Apakah anda ingin keluar? (y/t): ");
    scanf(" %c", &huruf);
    printf("=================================\n");

    } while (huruf=='t');

    printf("Terima kasih telah menggunakan program ini :)");
    return 0;
}

No. 2

*/