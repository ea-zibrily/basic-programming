#include <stdio.h>

int main(){
    //deklarasi var. int a, b, c, d
    int a = 12, b = 2, c = 3, d = 4;

    printf("Pencetak Hasil\n");
    printf("===============\n");
    //deklarasi proses menghitung dengan operator aritmatika
    a % b;  printf("a % b: %d\n", a % b); //mencetak hasil hitungan
    a - c;  printf("a - c: %d\n", a - c);
    a + b;  printf("a + b: %d\n", a + b);
    a / d;  printf("a / d: %d\n", a / d);
    a / d * d + a % d;  printf("a / d * d + a: %d\n",  a / d * d + a % d);
    a % d / d * a - c;  printf("a % d / d * a - c: %d\n", a % d / d * a - c);

    return 0;
}