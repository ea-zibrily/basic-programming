#include <stdio.h>

int main(){
    int n, i, u; //deklarsi variabel

    printf("Mengurutkan Bilangan\n");
    printf("=====================\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &n);
    //menggunakan nested loop for
    for (i=1; i<=n; i++)
    {
        for (u=1; u<=n; u++)
        {
            printf("%d  ", u);
        }
        printf("\n");
    }

    return 0;
}

/*
Dengan menggunakan pernyataan nested loop, buatlah program berikut:
input: n
output:
1 2 3 4 5 … n
1 2 3 4 5 … n
1 2 3 4 5 … n n kali
……
1 2 3 4 5 … n
*/