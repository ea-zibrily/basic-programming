#include <stdio.h>
#define max 6 //menentukan nilai max

void ulang (int x[], int y); //prototype func

int main(){
    //deklarasi variabel nilai
    int i, nilai[max];

    printf("== Zibril Yuan A - 02 - GTA-09 ==\n");
    printf("Masukkan nilai (Max 6 angka): \n");
    //menggunakan loop for untuk input data
    for (i=0; i<max; i++)
    {
        scanf("%d", &nilai[i]);
    }

    printf("------------------------\n");
    printf("Entered Number: ");
    //menggunakan loop for untuk menampilkan data
    for (i=0; i<max; i++)
    {
        printf("%d", nilai[i]);
    }
    //memanggil func ulang
    ulang(nilai, max);
    return 0;
}

void ulang (int x[], int y){
    int i, j;
    printf("\nReapeted digit(s): ");
    //menggunakan nested loop for untuk menentukan indeks array
    for (i=0; i<y; i++)
    {
        for (j=i+1; j<y; j++)
        {
           if (x[i] == x[j])
           {
              printf("%d ", x[i]);
           }        
        }    
    }
}


/*
Modifikasi program mengecek digit yang berulang (di praktikum array I Latihan 2) 
dengan menampilkan digit apa yang berulang. Contoh output :
*/