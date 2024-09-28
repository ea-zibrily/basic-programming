#include <stdio.h>

int main(){//deklarasi variabel
    char huruf;
    int counter = 0;

    printf("Perulangan Huruf!\n");
    printf("==================\n");
    //menggunakan fungsi loop while
    while (huruf <= 'W')
    {
        printf("Masukkan huruf: ");
        scanf(" %c", &huruf);

        counter++;//untuk mengatur banyak penambahan saat looping
    }
    printf("==================\n");
    printf("Perulangan huruf benar!");

    return 0;
}

/*
Gunakan loop while untuk membuat program yang dapat menampilkan semua
karakter yang diketikkan di keyboard sampai yang diketikkan pada keybord huruf
‘X’ (x besar).
*/