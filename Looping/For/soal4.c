#include <stdio.h>

int main(){
    char huruf; //deklarasi variabel

    printf("Menampilkan karakter Z-A\n");
    printf("========================\n");
    //menggunakan fungsi looping for
    for (huruf='Z'; huruf>='A'; huruf--) //eksp1,eksp2,eksp3
    {
        printf("Huruf %c\n", huruf); //mencetak huruf
    }
    return 0;
}

/*
Gunakan loop for dengan kenaikan varibel negatif untuk menampilkan seluruh karaker dari Z sampai
dengan A dalam baris-baris yang terpisah.
*/