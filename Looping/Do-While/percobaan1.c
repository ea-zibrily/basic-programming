#include <stdio.h>

int main(){
    char huruf; //deklarasi variabel
    int a=0;

    printf("Menampilkan Semua Karakter yang Diketikkan\n");
    printf("===========================================\n");
    printf("Masukkan karakter: ");
    //menggunakan fungsi loop do-while
    do
    {
        scanf(" %c", huruf);
        a++;
        if (huruf=='\n') //menggunakan if untuk menentukan nilai break
        {
           break;
        }
    } while (huruf>=48 && huruf<=122);

    return 0;
}

/*
Dengan menggunakan pernyataan break, buatlah program yang dapat
menampilkan semua tampilan karakter yang diketikkan dan program berakhir ketika
ditekan tombol Enter.
*/