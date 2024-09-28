#include <stdio.h>

void judul ();

int main(){
    //deklarasi var char letters dengan array ukuran 10 data
    char letters[10];
    //deklarasi var letters ke-4 = Z dengan indeks 3
    letters[3] = 'Z';

    judul();
    printf("Hurufnya adalah %c", letters[3]); //mencetak var letters

    return 0;   
}

void judul (){
    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Array 1 - Soal 2\n");
    printf("=====================================\n"); 
}

/*
1. Deklarasikan sebuah variabel array (misalkan nama variabelnya = letters) yang
mengalokasikan untuk 10 elemen bertipe char.
2. Masukkan karakter ‘Z’ pada elemen yang ke-empat dari array letters.
*/