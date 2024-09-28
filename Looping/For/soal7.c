#include <stdio.h>

int main(){
    int i,bilangan, hasil = 1; //deklarasi variabel

    printf("Menampilkan Bilangan Faktorial\n");
    printf("==============================\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);
    //menggunakan fungsi loop for
    for (i=1; i<=bilangan; i++) //eksp1,eksp2,eksp3
    {
        printf("%d", i);
        //menggunakan if untuk menentukan "*"
        if(i!=bilangan) printf("*");
    }
    return 0;
}