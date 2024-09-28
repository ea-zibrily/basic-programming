#include <stdio.h>

int main(){
    int n;

    printf("=========================\n");
    printf("For Fun Code!\n");
    printf("by Hana || Zibrily-GTA'09");
    printf("Ganjil apa Genap ngab?\n");
    printf("=========================\n");

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    if (n%2==0)
    {
        printf("Bilangan %d adalah Genap", n);
    }
    else{
        printf("Bilangan %d adalah Ganjil, n");
    }
    
    return 0;
}