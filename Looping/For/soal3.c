#include <stdio.h>

int main(){
    char huruf; //deklarasi variabel

    printf("Mengurutkan huruf A-Z\n");
    printf("======================\n");
    //menggunakan fungsi looping for
    for (huruf='A'; huruf<='Z'; huruf++) //eksp1,eksp2,eksp3
    {
        printf("Huruf %c\n", huruf); //mencetak huruf
    }
    return 0;
}