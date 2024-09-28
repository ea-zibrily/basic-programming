#include <stdio.h>
//prototype fungsi
int Swap(int m[][3], int geser);
void printArray(int m[][3]);

int main()
{
    //deklarasi variabel
    int i, j, geser;
    int m[3][3] = 
    { 
        { 2, 3, 1},
        { 4, 5, 1},
        { 7, 5, 4}
    };

    printf("== Zibril Yuan A - 02 - GTA-09 ==\n");
    //memanggil fungsi
    printArray(m);
    printf("----------------------------\n");
    printf("Mau tukar baris keberapa?: ");
    scanf("%d", &geser);
    Swap(m,geser);
    printArray(m);

    return 0;
}
//membuat fungsi Swap dan printArray
int Swap(int m[][3], int geser)
{
    int i, j, t, kol = geser;
    for (i=0; i<geser; i++)
    {
        t = m[0][i];
        m[0][i] = m[kol - 1][i];
        m[kol - 1][i] = t;
    }
    return t;
}

void printArray(int m[][3]){
    int i, j;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d ", m[i][j]);
        }  
        printf("\n");
    }
}