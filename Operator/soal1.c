#include <stdio.h>//directives include untuk memanggil file

int main(){
    //deklarasi var. int A,B,C,D,E, karena menggunakan bil. bulat
    int A;
    int B = 23;
    int C = 12;
    int D = 32;
    int E = 0;

    printf("Penghitung variabel A\n");
    printf("===================\n");

    //Menggunakan Operator Logic, Relasi, dan Bitwise.
    A = B&&E;   printf("Hasil A = B&&E: %6d\n", A); //Menggunakan Operator Logic
    A = B&C;    printf("Hasil A = B&C: %7d\n", A);  //Menggunakan Operator Bitwise
    A = C||D;   printf("Hasil A = C||D: %6d\n", A); //Menggunakan Operator Logic
    A = B|D;    printf("Hasil A = B|D: %7d\n", A);  //Menggunakan Operator Bitwise
    //Menggunakan Operator Relasional
    A = B>2;    printf("Hasil A = B>2: %7d\n", A);
    A = B>>2;   printf("Hasil A = B>>C: %6d\n", A);
    A = C<3;    printf("Hasil A = C<3: %7d\n", A);
    A = C<<3;   printf("Hasil A = C<<3: %6d\n", A);
    A = B=C;    printf("Hasil A = B=C: %7d\n", A);
    A = B==C;   printf("Hasil A = B==C: %6d\n", A);

    return 0;
}