#include <stdio.h>
//mendefinisikan nilai baris dan kolom
#define BARIS 2
#define KOLOM 2
//prototype fungsi
void jumlahMatrik(int mata[][KOLOM], int matb[][KOLOM]);
void kurangMatrik(int matrika[][KOLOM], int matrikb[][KOLOM]);
void printMatrik(int matrik[][KOLOM]);

int main(){
    //deklarasi variabel dengan array
    int matrik_a [BARIS][KOLOM] =
        {
        {12, 5},
        {4, 10}
        };
    int matrik_b [BARIS][KOLOM] =
        {
        {3, 5},
        {6, 5}
        };
    printf("== Zibril Yuan A - 02 - GTA-09 ==\n");

    printf("Matrik A adalah: \n");
    printMatrik(matrik_a);
    printf("Matrik B adalah: \n");
    printMatrik(matrik_b);
    printf("---------------------\n");
    //memanggil fungsi
    jumlahMatrik(matrik_a,matrik_b);
    kurangMatrik(matrik_a,matrik_b);
    return 0;
}
//membuat fungsi jumlah, kurang, dan print
void jumlahMatrik(int matrika[][KOLOM], int matrikb[][KOLOM]){
    int c1,c2,c3,c4;
    c1=matrika[0][0] + matrikb[0][0];
    c2=matrika[0][1] + matrikb[0][1];
    c3=matrika[1][0] + matrikb[1][0];
    c4=matrika[1][1] + matrikb[1][1];
    printf("Penjumlahan Matrik C: \n");
    printf("%d %d\n%d %d", c1,c2,c3,c4);
}

void kurangMatrik(int matrika[][KOLOM], int matrikb[][KOLOM]){
    int c1,c2,c3,c4;
    c1=matrika[0][0] - matrikb[0][0];
    c2=matrika[0][1] - matrikb[0][1];
    c3=matrika[1][0] - matrikb[1][0];
    c4=matrika[1][1] - matrikb[1][1];
    printf("\nPengurangan Matrik D: \n");
    printf("%d %d\n%d %d", c1,c2,c3,c4);
}

void printMatrik(int matrik[][KOLOM]){
    int i,j;
    for (i=0; i<BARIS; i++)
    {
        for (j=0; j<KOLOM; j++)
        {
           printf("%d ", matrik[i][j]);
        }
        if (matrik[0][1])
        {
            printf("\n");
        } 
    }
}


/*
Terdapat matrik A dan B dengan ordo n, hitunglah :
• matrik C = A + B
• matrik D= A + B
void jumlahMatrik(char A[], char B[], char C[], int n) ;
void kurangMatrik(char A[], char B[], char C[], int n) ;
*/