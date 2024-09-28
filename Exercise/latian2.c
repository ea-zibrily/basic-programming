//LATIAN PROGRAM PENGHITUNG

#include <stdio.h>

int main(){
    int luas_pp,p, l, t;

    printf("Penghitung Luas Persegi Panjang\n");
    printf("Panjang: ");
    scanf("%d", &p);

    printf("Lebar: ");
    scanf("%d", &l);

    printf("Tinggi: ");
    scanf("%d", &t);
    luas_pp = p*l*t;

    printf("Hasil hitungan: %d\n", luas_pp);
    return 0;
}

/* LATIAN PROGRAM LUAS LINGKARAN
#include <stdio.h>
#define pi 3.14

int main(){
 float luas_lingkaran;
 float r;

 printf("Penghitung Luas Lingkaran\n");
 printf("Masukkan jari-jari: ");
 scanf("%f", &r);
 luas_lingkaran = pi*r*r;

printf("Hasil hitungan: %.2f", luas_lingkaran);
return 0;

}
*/