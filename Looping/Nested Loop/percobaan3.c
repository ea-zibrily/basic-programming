#include <stdio.h>

int main(){
    int n, a=1, b=2, bagi, prima; //deklarasi variabel

    printf("Menentukan Bilangan Prima\n");
    printf("===========================\n");
    printf("Masukkan Bilangan: ");
    scanf("%d", &n);
    //menggunakan nested loop while for
    while (a<=n)
    {
        prima=1;
        for (bagi=2; bagi<b; bagi++)
        {
        if (b%bagi==0){
            prima=0;
            break;
        }

        }
        
        if (prima)
        {
            printf("%d ", b);
            a++;
        }
        b++;
    }
    return 0;

}

/*
Dengan menggunakan pernyataan nested loop, buatlah program berikut:
input: n

output: 2 3 5 7 11…. Bilangan prima ke n

dengan menu y/t

#include <stdio.h>

int main(){
    int n, a=1, b=2, bagi, prima; //deklarasi variabel
    char huruf='y';

    printf("Menentukan Bilangan Prima\n");
    printf("===========================\n");
    //menggunakan do-while untuk mengulang menu y/t
    do
    {
    printf("Masukkan Bilangan: ");
    scanf("%d", &n);
    //menggunakan nested loop while for
    while (a<=n)
    {
        prima=1;
        for (bagi=2; bagi<b; bagi++)
        {
        if (b%bagi==0){
            prima=0;
            break;
        }

        }
        
        if (prima)
        {
            printf("%d ", b);
            a++;
        }
        b++;

    }
        printf("\nApa anda ingin keluar? (y/t): ");
        scanf(" %c", &huruf);
        printf("===============================\n");
    } while (huruf=='t');
    
    printf("Terima kasih telah menggunakan program ini :)");
    return 0;
}
*/