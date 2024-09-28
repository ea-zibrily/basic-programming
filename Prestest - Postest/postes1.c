#include <stdio.h>

int main(){
    int a, a1=0, b, i, n; //deklarasi variabel

    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program menghitung bilangan!\n");
    printf("=====================================\n");

    printf("Masukkan angka: ");
    scanf("%d", &n);
    printf("Masukkan nilai awal: ");
    scanf("%d", &a);
    printf("Masukkan nilai mulai: ");
    scanf("%d", &b);
    //menggunakan loop for
    for (i=0; i<n; i++)
    {   
        printf("%d ", a);
        a1+=a;
        a+=b;
        b++;
    }
    printf("\n===================\n");
    printf("Jumlahnya adalah %d", a1);

return 0;
}