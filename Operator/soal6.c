#include <stdio.h> //directives include untuk memanggil file
//#include <iostream.h> tidak digunakan karena tidak termasuk direktori

int main(){
    int y, n; //deklarasi var. int y, n karena menggunakan bil. bulat
    //deklarasi var. n dan menggunakan operator ekspresi
    n =10; y=++n;   printf("y = %d\n",y); //menggunakan binary operatar
    n =10; y=n++;   printf("y = %d\n",y); //menggunakan binary operatar
    n =10; n++;     printf("n = %d\n",n); //menggunakan unary operatar
    //system("PAUSE") berfungsi menghentikan proses eksekusi sampai user menekan sembarang tombol
    system("PAUSE");
    return(0);
}

/*PEMBUKTIAN SOAL NO 7
#include <stdio.h>

int main(){
    int  n, f;
    float z, b;
    n=-1;
    f=8;
    b=7.8;

    z = (n > 0) ? f : b;
    printf("Hasil Z: %.2f\n", z);
}
*/