#include <stdio.h>

void judul ();

int main(){
    //deklarasi var int deret dengan array ukuran 5 data
    int deret [5], i;

    judul();
    //menggunakan loop for
    for (i=0; i<5; i++)
    {
        printf(" Bilangan ke-%d: ", i+1);
        scanf("%d", &deret[i]);
    }
    return 0;   
}

void judul (){
    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Array 1 - Soal Latihan 1\n");
    printf("=====================================\n"); 
}

/*
1. Deklarasikan sebuah variabel array, selanjutnya isi array tsb kemudian
tampilkan isi variabel tersebut menggunakan statement for(). Ingat apabila
jumlah deklarasi index adalah n maka nilai index-nya adalah dimulai dari 0
sampai n-1.
2. Deret fibonanci adalah deret yang dimulai dengan dua angka yang bernilai 0
dan 1, kemudian deret ketiga ditentukan dari penjumlahan kedua angka
tersebut, sedangkan deret keempat ditentukan dari dua angka sebelumnya
begitu seterusnya. Sehingga didapatkan deret fibonanci sebagai berikut: 0 1 1 2
3 5 8 13 21 …
Buatlah program untuk meminta input dari user berupa sebuah bilangan,
kemudian tampilkan deret fibonacci mulai dari 1 sampai dengan bilangan tsb.
*/