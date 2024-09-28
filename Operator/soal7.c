#include <stdio.h>

int main(){
    int  n, f;
    float z, b;
    n=-1;
    f=8;
    b=7.8;

    z = (n > 0) ? f : b;
    printf("Hasil Z: %.1f\n", z);
    return 0;
}