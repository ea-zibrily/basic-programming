#include <stdio.h> //directives include untuk memanggil file
//#include <iostream.h> tidak digunakan karena tidak termasuk direktori

int main(){
    float x; //deklarasi var. float x, karena menggunakan bil. pecahan

//deklarasi var. x dan statement printf untuk menampilkan hasil x
    x = 7/2;        printf("x = %f\n",x); 
    x = 7.0/2;      printf("x = %f\n",x);
    x = 7/2.0;      printf("x = %f\n",x);
    x = 7.0/2.0;    printf("x = %f\n",x);
    //'float' (7/2) berfungsi mengubah menjadi bil.pecahan,bisa juga diganti menjadi 7.0/2.0
    x = (float)7/2; printf("x = %f\n\n\n",x); 
    //system("PAUSE") berfungsi menghentikan proses eksekusi sampai user menekan sembarang tombol
    system("PAUSE");
    return(0);
}