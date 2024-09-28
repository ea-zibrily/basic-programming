#include <stdio.h>

int main(){
    //deklarasi var float a,b,c dengan baris dan kolom 2
    float a[2][2], b[2][2], c[2][2];
    int i, j;

    printf("Enter elements of 1st matrix\n");
    //menggunakan nested loop for untuk input a
    for (i=0; i < 2; ++i)
    {
        for (j=0; j < 2; ++j)
        {
            printf("Enter a%d%d: ", i+1, j+1);
            scanf("%f", &a[i][j]);
        }
    }
    //menggunakan nested loop for untuk input b
     for (i=0; i < 2; ++i)
    {
        for (j=0; j < 2; ++j)
        {
            printf("Enter b%d%d: ", i+1, j+1);
            scanf("%f", &b[i][j]);
        }
    }
    //menggunakan nested loop for untuk menghitung c
     for (i=0; i < 2; ++i)
    {
        for (j=0; j < 2; ++j)
        {
          c[i][j] =  a[i][j] +  b[i][j];
        }
    }
    //menggunakan nested loop for menampilkan hasil penjumlahan
     for (i=0; i < 2; ++i)
    {
        for (j=0; j < 2; ++j)
        {
          printf("%.1f", c[i][j]);
          if (j==1)
          {
            printf("\n");
          }
        }
    }

    return 0;
}