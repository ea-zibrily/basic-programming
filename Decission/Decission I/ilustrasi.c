#include <stdio.h>

int main(){
    int a;

    printf("Masukkan a: ");
    scanf("%d", &a);

    if (a >= 10)
    {
        printf("bilangan a adalah benar");
    }
    else{
        printf("bilangan a adalah salah");
    }
    return 0;
}