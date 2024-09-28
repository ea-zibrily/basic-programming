#include <stdio.h>

int main(){
    int n, i, u; //deklarasi variabel

    printf("Mengurutkan Bilangan\n");
    printf("=====================\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &n);
    //menggunakan nested loop for
    for (i=1; i<=n; i++)
    {
        for (u=1; u<=i; u++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;

}

/*
Dengan menggunakan pernyataan nested loop, buatlah program berikut:
input: n
output:
1
2 2
3 3 3 n kali
……
n n n n n … n

Jika dengan pilihan y/t

#include <stdio.h>

int main(){
    int n, i, u; //deklarasi variabel
    char huruf ='y';

    printf("Mengurutkan Bilangan\n");
    printf("=====================\n");
    //menggunakan do--while untuk mengulang menu y/t
    do
    {
        printf("Masukkan bilangan: ");
    scanf("%d", &n);
    //menggunakan nested loop for
    for (i=1; i <= n; i++)
    {
        for (u=1; u<=i; u++)
        {
            printf("%d ", i);
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
*/