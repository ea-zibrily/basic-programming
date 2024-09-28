#include <stdio.h>

void judul();

int main(){
    //deklarasi var float balances dengan array 3 baris dan 5 kolom
    float balances [3][5] ={(1,2,3,4,5), (1,3,5,7,9), (2,4,6,8,10)};
    int i, j;

    judul();
    //menggunakan nested loop for
    for (i=0; i<3; i++)
    {
        for (j=0;j<5; j++)
        {
           printf("%.2f ", balances[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void judul (){
    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Array 1 - Soal 5\n");
    printf("=====================================\n"); 
}


/*
4. Deklarasikan sebuah array multidimensi yang elemennya bertipe float (array of
float, misalkan namanya = balances) yang memiliki 3 baris dan 5 kolom.
5. Gunakan loop for untuk menghitung nilai total dari seluruh isi array balances di
atas.
*/