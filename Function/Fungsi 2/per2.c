#include <stdio.h>

int faktorial (int x); //prototype fungsi faktorial
int n; //variabel global/extern

int main(){
    int faktor; //deklarasi variabel

    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Fungsi 2 - Percobaan 2\n");
    printf("=====================================\n");

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    faktor = faktorial(n); //memangggil fungsi faktorial

    return 0;
}
//membuat fungsi menu dengan parameter int x
int faktorial (int x){
    long int f=0, i; //deklarasi var long int
//menggunakan fungsi loop for untuk mencari nilai faktorial
    for (i=n; i>0; i--)
    {
        printf("%d", i);
        f+=i;
        if (i!=1)
        {
            printf(" + ");
        }
    }
    printf(" = %d", f);
    return f;
}


/*
2. Buatlah program untuk menghitung faktorial dengan menggunakan 2 fungsi
(main() dan faktorial()). Fungsi faktorial() memberikan return
value bertipe long int yang akan dicetak ke layar dalam fungsi main().
*/