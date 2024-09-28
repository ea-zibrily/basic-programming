#include <stdio.h>

void judul();

int main(){
    //deklarasi var int numbers dengan array ukuran 5 data
    int i, total=0, numbers[5];

    judul();
    //menggunakan loop for
    for (i=0; i<=4; i++)
    {
        printf("Bilangan ke-%d: ", i+1);
        scanf("%d", &numbers[i]);
        total+=numbers[i];
    }
    printf("Totalnya adalah: %d", total);
    return 0;
}

void judul (){
    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Array 1 - Soal 3\n");
    printf("=====================================\n"); 
}

/*
3. Gunakan loop for untuk menghitung nilai akumulasi (total) dari seluruh isi sebuah
array integer (array of int, misalkan namanya = numbers) yang memliki 5 elemen.
*/