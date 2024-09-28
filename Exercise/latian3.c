#include <stdio.h>

int main(){
    int var_bulat = 32767;
    float var_pecahan1 = 339.23234;
    float var_pecahan2 = 321.97909;
    char var_karakter = 'S';

    printf("Tampilan Variabel\n");
    printf("Bilangan bulat: %d\n", var_bulat);
    printf("Bilangan Pecahan 1: %.2f\n", var_pecahan1);
    printf("Bilangan Pecahan 2: %.2f\n", var_pecahan2);
    printf("Karakter: %c\n", var_karakter);
    return 0;
}

/*
 Diketahui variabel-variabel berikut:
    var_bulat = 32767;
    var_pecahan1 = 339.23234
    var_pecahan2 = 321.97909
    var_karakter = 'S'
Buatlaj program untuk menampilkan variabel tersebut
*/