#include <stdio.h>

int main(){
    int a;

    printf("Penentu Bilangan Ganjil & Genap\n");

    printf("Masukkan bilangan: ");
    scanf("%d", &a);

    printf("Bilangan yang dimasukkan adalah: %d\n", a);
    if (a%2 == 0)
    {
        printf("Bilangan %d adalah bilangan Genap", a);
    }
    else{
        printf("Bilangan %d adalah bilangan Ganjil");
    }

    return 0;
}

/*
Buat program untuk menginputkan sebuah bilangan, kemudian cetak ke layar bilangan
tersebut dan beri komentar apakah bilangan tersebut ganjil atau genap.
Contoh input = 15
 Output = Bilangan yang diinputkan adalah 15.
 Bilangan tersebut adalah bilangan ganjil. 
*/