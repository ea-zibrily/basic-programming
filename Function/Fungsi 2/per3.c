#include <stdio.h>

int prima(int x); //prototype fungsi prima
int n; //variabel global/extern

int main(){
    int bilprima; //deklarasi variabel

    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Fungsi 2 - Percobaan 3\n");
    printf("=====================================\n");

    printf("Masukkan bilangan: ");
    scanf("%d",&n);

    bilprima = prima(n); //memanggil fungsi prima
    //menggunakan if else untuk menentukan bil prima
    if(bilprima){
        printf("Bilangan %d adalah bilangan prima\n",n);
    }
    else{
        printf("Bilangan %d bukan bilangan prima\n",n);
    }
    
   return 0;
}

int prima(int x){
    int i, faktor = 0;
    //menggunakan fungsi loop for
    for (i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
        faktor++;
        }
    }
    if(faktor <= 2)
    {
    return 1;
    }
    else{
    return 0;
    }
}


/*
3. Buatlah fungsi prima(), yang memberikan nilai balik 1 bila bilangan yang
dimasukkan adalah prima, dan 0 bila bukan bilangan prima.

#include <stdio.h>
int prima(int bil);
main()
{
    int bil,isPrima;
    printf("\nMasukkan bilangan \t= ");
    scanf("%d",&bil);
    isPrima = prima(bil);
    if(isPrima)
    printf("\nBilangan %d adalah bilangan PRIMA\n\n",bil);
    else
    printf("\nBilangan %d bukan bilangan PRIMA\n\n",bil);
    getchar();
}
int prima(int bil)
{
    int pembagi,faktornya = 0;
    for(pembagi =1;pembagi <= bil;pembagi++)
    {
        if(bil % pembagi == 0)
        faktornya++;
    }
    if(faktornya <= 2)
    return 1;
    else
    return 0;
}
*/