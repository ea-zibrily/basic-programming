#include <stdio.h>

int main(){
    int a = 22; //deklarasi var. int a, karena menggunakan bil. bulat
    //deklarasi proses menghitung var. a
    a = a + 5;
    a = a-2; //var. a yang digunakan adalah hasil dari proses sebelumnya
    printf("a = %d\n", a); //menampilkan hasil hitungan a
    return 0;
}