#include <stdio.h>

int main(){
    int n, i, j; //deklarasi variabel

    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Pattern Diamond!\n");
    printf("=====================================\n");

    printf("Masukkan nilai: ");
    scanf("%d", &n);
    //menggunakan nested loop for
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("*");
        }
    }

return 0;
}


/*    int n, i=0, j=0;

    printf("Program Mencetak Diamond!\n");
    printf("=========================\n");
    printf("Masukkan nilai: ");
    scanf("%d", &n);

}*/