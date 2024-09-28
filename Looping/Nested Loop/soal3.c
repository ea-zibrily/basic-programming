#include <stdio.h>

int main(){
    int n, i, faktor=1; //deklarasi variabel

    printf("Menghitung Faktorial\n");
    printf("=====================\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &n);
    //menggunakan loop for
    for (i=1; i<=n; i++)
    {
        faktor*=i;
    }

    printf("Hasilnya adalah %d", faktor);
    return 0;
}