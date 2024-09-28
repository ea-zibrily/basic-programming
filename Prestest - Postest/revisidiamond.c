#include <stdio.h>

int main(){
    //deklarasi variabel
    int panjang, i, j, a, b;
    //input data panjang
    printf("Masukkan panjang: ");
    scanf("%d", &panjang);

    //menggunakan nested loop - for
    for (i=1, a=panjang, b=2*panjang+1; i<panjang; i++, a--, b++)
    {
         for (j=0; j<3*panjang; j++)
        {   
            //menggunakan if j>=a && j<=b untuk membuat pola
            if(j>=a && j<=b)
            {
                //menggunnakan if-else untuk menentukan isi
                if (j%2==0)
                    printf("@");
                else
                    printf("#");
            }
            else
            {
                printf(" ");
            }   
        }
        printf("\n");
    }

    //menggunakan nested loop - for
    for (i=0, a=panjang, b=3*panjang+1; i<panjang; i++, a++, b--)
    {
        for (j=0; j<3*panjang; j++)
        {
            //menggunakan if j>=a && j<=b untuk membuat pola
            if(j>=a && j<=b)
            {   //menggunnakan if-else untuk menentukan isi
                if (j%2==0)
                    printf("@");
                else
                    printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}