#include <stdio.h>

int main(){
    int n, i, j, k; //deklarasi variabel

    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Pattern Segitia!\n");
    printf("=====================================\n");

    printf("Masukkan nilai: ");
    scanf("%d", &n);

    k=n*(n+1)/2;
    //menggunakan nested loop for
    for (i=n; i>=0; i--)
    {
        for (j=1; j<=i; j++)
        {
            printf("%-3d", k--); //-3 agar angka yang dicetak berada di kiri
        }
        printf("\n");
    }

return 0;
}