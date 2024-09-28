#include <stdio.h>

int main(){
    //deklarasi variabel dengan tipe data yang berbeda
    int var_bulat = 32767;
    float var_pecahan1 = 339.2345678;
    double var_pecahan2 = 3.4567e+40; //menggunakan double karena nilai yang dimasukkan bil. pecahan presisi ganda
    char var_karakter = 'S'; //var char harus diberi tanda petik tunggal

    printf("Menampilkan Variabel\n");
    printf("=================\n");
    //mencetak masing-masing variabel
    printf("Variabel bulat: %d\n", var_bulat);
    printf("Variabel pecahan 1: %f\n", var_pecahan1);
    printf("Variabel pecahan 2: %f\n", var_pecahan2);
    printf("Variabel karakter: %c\n", var_karakter);

    return 0;
}