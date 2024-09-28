#include <stdio.h>
//menentukan nilai BARIS dan KOLOM
#define BARIS 5
#define KOLOM 5

int main(){
    //deklarasi variabel
    int i, j, data[BARIS][KOLOM], jumlah_baris [BARIS]={0}, jumlah_kolom[KOLOM]={0};

    printf("== Zibril Yuan A - 02 - GTA-09 ==\n");
    //menggunkan loop for untuk input nilai
    for (i=0; i<BARIS; i++)
    {
        printf("Enter Row's %d: ", i+1);
        scanf("%d %d %d %d %d", &data[i][0], &data[i][1], &data[i][2], 
        &data[i][3], &data[i][4]);
    }
    //menggunakan nested loop for untuk menghitung jumlah baris kolom
    for (i=0; i<BARIS; i++)
    {
        for (j=0; j<KOLOM ; j++)
        {
           jumlah_baris[i]+=data[i][j];
           jumlah_kolom[j]+=data[i][j];
        }
    }

    printf("-----------------------\n");
    printf("Row totals: ");
    for (i=0; i<BARIS; i++)
    {
       printf("%d ", jumlah_baris[i]);
    }

    printf("\nColumn totals: ");
    for (i=0; i<KOLOM; i++)
    {
       printf("%d ", jumlah_kolom[i]);
    }

    return 0;
}