#include <stdio.h>

int bulat (int x); //prototype fungsi bulat

int main(){
    int n, hasil; //deklarasi variabel

    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Fungsi 2 - Percobaan 1\n");
    printf("=====================================\n");

    printf("Masukkan angka: ");
    scanf("%d", &n);

    hasil = bulat(n); //memanggil fungsi

    return 0;
}
//membuat fungsi menu dengan parameter int x
int bulat (int x){
    int a=1, b=0;
    //menggunakan if else untuk menentukan genap/ganjil
    if (x%2==0)
    {
        printf("Bilangan %d adalah Genap", x);
        return a;
    }
    else{
        printf("Bilangan %d adalah Ganjil", x);
        return b;
    }
}

/*
1.  a. Definisikan sebuah fungsi ganjil() yang memilliki sebuah parameter
    bilangan bulat dan mengembalikan nilai 1 jika parameter yang diberikan adalah
    bilangan ganjil dan mengembalikan nilai 0 jika parameter tsb bukan bilangan
    ganjil
    b. Tulislah prototipe fungsi untuk fungsi tersebut.
    c. Buat function main untuk memanggil function ganjil() yang menerima
    input sebuah bilangan bulat yang akan ditentukan ganjil/genapnya. Tampilkan
    pesannya (ganjil/genap) dalam main().
*/