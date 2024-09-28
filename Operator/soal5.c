#include <stdio.h> //directives include untuk memanggil file
//#include <iostream.h> tidak digunakan karena tidak termasuk direktori

int main(){
    int y=33, x=45; //deklarasi var. int y dan x, karena menggunakan bil. bulat
//deklarasi y = ... dan statement printf untuk menampilkan y
    y = y && x;     printf("y = %d\n",y); //&& (and/dan) merupakan Operator Logic yang menemtukan t(1)/f(0).
    y = y & x;      printf("y = %d\n",y); //Menggunakan operator Bitwise
    y = y || x;     printf("y = %d\n",y); //|| (or/atau) merupakan Operator Logic yang menemtukan t(1)/f(0).
    //Menggunakan operator Bitwise
    y = y | x;      printf("y = %d\n",y); 
    y &= y = x;     printf("y = %d\n",y); 
    y ^= y = x;     printf("y = %d\n",y); 
    //system("PAUSE") berfungsi menghentikan proses eksekusi sampai user menekan sembarang tombol
    system("PAUSE");
    return(0);
}