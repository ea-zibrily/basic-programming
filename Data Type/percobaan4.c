#include <stdio.h>

int main(){
    //deklarasi var. int a, b, c, D
    float a, b, c, D;
    
    printf("Menghitung Persamaan Diskriminan\n");
    printf("============================\n");
    //deklarasi input nilai dari var. a,b,c
    printf("Masukkan A: ");
    scanf("%f", &a);
    printf("Masukkan B: ");
    scanf("%f", &b);
    printf("Masukkan C: ");
    scanf("%f", &c);
    D = b-4*a*c; //proses menghitung var. D (diskriminan)

    //deklarasi output nilai dari var. D
    printf("Hasil Diskriminan: %.2f", D);
    return 0;

}

/*
PERCOBAAN 2 FLOAT
#include <stdio.h>

int main(){

    float a = 12, b = 2, c = 3, d = 4;

    printf("Pencetak Hasil\n");
    printf("===============\n");

    printf("(int)a % (int)b: %.2f\n", (int)a % (int)b);
    printf("a - c: %.2f\n", a - c);
    printf("a + b: %.2f\n", a + b);
    printf("a / d: %.2f\n", a / d);
    printf("a / d * d + (int)a % (int)d: %.2f\n", a / d * d + (int)a % (int)d); 
    printf("(int)a % (int)d / d * a - c: %.2f\n", (int)a % (int)d / d * a - c);  
    return 0;
}

#include <stdio.h>

int main(){
    float a, b, c, D;

    printf("Menghitung Persamaan Diskriminan\n");
    printf("============================\n");

    printf("Masukkan A: ");
    scanf("%f", &a);

    printf("Masukkan B: ");
    scanf("%f", &b);

    printf("Masukkan C: ");
    scanf("%f", &c);
    D = b-4*a*c;

    printf("Hasil Diskriminan: %.2f", D);
    return 0;

}

*/