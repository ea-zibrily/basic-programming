#include <stdio.h>
#define max 9 //memberikan nilai 9 pada max

int main(){
    //deklarasi var char *kkata dan kata
    char *kkata[max], kata[]={"POLITEKNIK"};
    int i;

    printf("= Zibril Yuan A - 02 - GTA'09 =\n");
    //menggunakan loop for
    for (i=0; i<max; i++){
        kkata[i] = &kata[i];
    }
    printf("Huruf ketiga dari kata %s adalah %c", kata, *kkata[2]);

    return 0;
}