#include <stdio.h>

int main(){
    //deklarasi var. int a, b, c, D
    int a;
    int b;
    int c;
    int D;

    printf("Menghitung Diskriminan\n");
    printf("============================\n");
    //deklarasi input nilai dari var. a,b,c
    printf("Masukkan A: ");
    scanf("%d", &a);
    printf("Masukkan B: ");
    scanf("%d", &b);
    printf("Masukkan C: ");
    scanf("%d", &c);
    D = b-4*a*c; //proses menghitung var. D (diskriminan)

    //deklarasi output nilai dari var. D
    printf("Hasil Diskriminan: %d", D);
    return 0;

}